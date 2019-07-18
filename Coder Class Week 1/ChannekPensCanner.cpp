#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char x[750000] = "",ent;
	cin>>x;
	int n = (strlen(x) - 1) / 5;
	//cout << n<<endl;
	char* has = new char[n + 1];
	memset(has, 0, (n+1) * (sizeof has[0]));
	//baris 1
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (x[i*5+2] == '1') {
			has[i] = ' ';
		}
	}
	//baris 2
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (has[i] == 0) {
			if (x[i * 5 + 4] == '1') {
				has[i] = 'C';
			}
		}
		
	}
	//baris 3-6
	
	for (int ii = 0; ii < 4; ii++) {
		cin >> x;
	}
	//baris 7
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (has[i] == 0) {
			if (x[i*5+2] == '1') {
				has[i] = 'A';
			}
			else {
				has[i] = 'B';
			}
		}
		
	}
	cin >> x;
	cout << has<<endl;
}