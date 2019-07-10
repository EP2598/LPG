#include <iostream>
#include <cstring>
using namespace std;

class Node {
public:
	Node* next;
	char* name;
	Node(char * x) {
		next = NULL;
		name = x;
	}
};

class LinkedList {
public:
	Node* head, * tail;

	LinkedList() {
		head = NULL;
		tail = NULL;
	}
	void insert() {
		char* x = new char[11];
		cin >> x;
		if (head == NULL) {
			head = new Node(x);
			tail = head;
		}
		else {
			Node *temp = new Node(x);
			tail->next = temp;
			tail = temp;
		}
	}
	void pop() {
		if (head == NULL) {
			return;
		}
		cout << head->name << endl;
		Node * temp = head;
		head = head->next;
		free(temp);
		if (head == NULL) {
			tail = NULL;
		}
	}
};

int main()
{
	LinkedList ll;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		switch (x) {
		case (1):
			ll.insert();
			break;
		case (2):
			ll.pop();
			break;
		}
	}
}