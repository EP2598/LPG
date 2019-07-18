#include <iostream>
using namespace std;

void func() {
	int n, m, k;
	cin >> m >> n >> k;
	int* a = new int[n];
	unsigned long long temp =0,defic;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		temp += a[i];
	}
	defic = (n * k) - temp;
	if (defic < 0) {
		defic *= -1;
		int total;
		if (m % defic == 0) {
			total = (m / defic)-1;
		}
		else {
			total = m / defic;
		}
		m -= defic * total;
		total *= n;
		int i = 0;
		while (true) {
			if (m == 0) {
				break;
			}
			m += k;
			if (m < a[i]) {
				break;
			}
			m -= a[i];
			total += 1;
			i = (i + 1) % n;
		}
		cout << total << endl;
	}
	else {
		cout << "-1\n";
	}


	delete[] a;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		func();
	}
}