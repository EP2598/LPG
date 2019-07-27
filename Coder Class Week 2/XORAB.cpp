#include <iostream>
#include <vector>
using namespace std;


int main()
{
	unsigned long long a, b,c;
	int temp;
	vector<bool> arr;
	cin >> a >> b;
	c = b - a;
	while (b > 0) {
		if (a != 0) {
			arr.push_back(c % 2 == 0 && a % 2 == 1);
		}
		else {
			arr.push_back(c % 2 == 1);
		}
		a /= 2;
		b /= 2;
		c /= 2;
	}
	for (auto ir = arr.rbegin(); ir != arr.rend(); ++ir)
		cout << *ir;
	cout << endl;
}