#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strr;
	getline(cin, strr);
	int i = 0;
	long int x = 1;
	while (strr[i] != '\0') {
		if (strr[i] == 'e') {
			if (strr[i + 1] == 'u') {
				x = (x * 3) % 1000000007;
			}
			else {
				x = (x * 2) % 1000000007;
			}
		}
		i++;
	}
	cout << x << endl;
}