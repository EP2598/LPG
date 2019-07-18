#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char conv[] = "0123456789ABCDEF";
	int T,b,d;
	unsigned long long n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n >> b >> d;
		//kalo diatas 14
		if (n > 14) {
			for (int i = 1; i < d; i++) {
				cout << 0;
			}
			cout << 1 << endl;
			continue;
		}//kalo dibawah 14
		// kalo D lebih besar 
		else if (d > n) {
			for (int i = 1; i < n / 2; i++) {
				cout << conv[b-1];
			}
			cout << conv[b-2];
			for (int i = 1; i < n / 2; i++) {
				cout << 0;
			}
			cout << 1<<endl;
		}// kalo n lebi besar
		else {
			char* arr = new char[n];
			memset(arr, '0', n);
			for (int i = 0; i < (n / 2) - 1; i++) {
				arr[i] = conv[b-1];
			}
			arr[(n / 2) - 1] = conv[b - 2];
			arr[n - 1] = '1';
			for (int i = n - d; i < n; i++) {
				cout << arr[i];
			}
			cout << endl;
		}
	}
}