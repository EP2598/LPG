#include <iostream>
#include <string>
#include <vector>
using namespace std;

class orang {
public:
	int key;
	vector<int> arr;
	orang(string x,int i) {
		key = i;
		int temp=1;
		for (int i = 0; i < 40; i += 2) {
			if (x[i] == '\0') {
				break;
			}
			if (x[i] == 'h') {
				if (*arr.end() == 3) {
					temp++;
					if (temp <= 5) {
						continue;
					}
				}
				temp = 1;
				arr.push_back(3);
			}
			else if (x[i] == 'a' || x[i] == 'p') {
				if (*arr.end() == 2) {
					temp++;
					if (temp <= 5) {
						continue;
					}
				}
				temp = 1;
				arr.push_back(2);
			}
			else {
				if (*arr.end() == 1) {
					temp++;
					if (temp <= 5) {
						continue;
					}
				}
				temp = 1;
				arr.push_back(1);
			}
		}
	}
};

class Barisan {
public:
	vector<orang> llist;
	void add(orang x) {
		llist.push_back(x);
	}
	bool adaorang() {
		if (llist.empty()) {
			return false;
		}
		cout << "Pembeli #" << llist[0].key << endl;
		//selama pembeli masi ada isi arr, pindahin ke arr berikutnya
	}
}*arr[3];


void func() {
	
	int n;
	cin >> n;
	string x;
	for (int i = 1; i <= n; i++) {
		getline(cin, x);
		orang a(x,i);
		arr[a.arr[0]]->add(a);
	}

	bool kosong = true;
	while (rame) {
		for (int i = 0; i < 3; i++) {
			
		}
	}
}

int main()
{
	int n;
	for (int i = 1; i <= n; i++) {
		cout << "Kasus #" << i << endl;
		func();
	}
	
}