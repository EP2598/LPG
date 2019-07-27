#include <iostream>
#include <iomanip>
using namespace std;
int tots;
int count(int i, int j, int y, int K, int H) {
	return ((((i - 1) * y + j) * K + H) % tots) + 1;
}
void func() {
	int x, y, K, H, temp1, temp2;
	cin >> x >> y >> K >> H;
	int i = 1, j = 1;
	tots = x * y;
	cout << setw(7) << setfill('0') << count(i, j, y, K, H) << endl;
	//selama i bukan y dan j bukan x
	while (!(i == y && j == x)) {
		if (i == y) {
			j++;
			cout << setw(7) << setfill('0') << count(i, j, y, K, H) << endl;
		}
		else if (j == x) {
			i++;
			cout << setw(7) << setfill('0') << count(i, j, y, K, H) << endl;
		}
		else {
			temp1 = count(i + 1, j, y, K, H);
			temp2 = count(i, j + 1, y, K, H);
			if (temp1 < temp2) {
				i++;
				cout << setw(7) << setfill('0') << temp1 << endl;
			}
			else {
				j++;
				cout << setw(7) << setfill('0') << temp2 << endl;
			}
		}
	}
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		func();
	}
}