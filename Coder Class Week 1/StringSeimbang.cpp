#include <iostream>
#include <cstdio>
using namespace std;

class Node {
public:
	char val;
	Node* next;
	Node(char x) {
		val = x;
		next = NULL;
	}
};
class LinkedList {
public:
	Node* head, * tail;
	int val;
	LinkedList() {
		head = NULL;
		tail = NULL;
		val = 0;
	}
	void insert(char x) {
		if (tail == NULL) {
			head = new Node(x);
			tail = head;
		}
		else {
			tail->next = new Node(x);
			tail = tail->next;
		}
	}
	void simpl() {
		int temm;
		do {
			temm = val;
			Node* curr = head;
			while (curr != NULL)
			{
				if (curr->val == '(' && curr->next != NULL) {
					Node* temp = curr->next;
					if (temp->val == ')') {
						curr->val = '1';
						curr->next = temp->next;
						free(temp);
						val++;
					}
					else if (temp->val == '1' && temp->next != NULL) {
						Node* temp2 = temp->next;
						if (temp2->val == ')') {
							curr->val = '1';
							curr->next = temp2->next;
							free(temp);
							free(temp2);
							val++;
						}
					}
				}
				else if (curr->val == '1' && curr->next != NULL) {
					Node* temp = curr->next;
					if (temp->val == '1') {
						curr->next = temp->next;
						free(temp);
						val++;
					}
				}
				curr = curr->next;
			}
		} while (temm != val);
		
	}
};

int main()
{
	LinkedList LL;
	int n;
	cin >> n;
	char x;
	getchar();
	for (int i = 0; i < n; i++) {
		x = getchar();
		LL.insert(x);
	}
	LL.simpl();
	cout << LL.val << endl;
}