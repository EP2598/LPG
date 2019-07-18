#include <iostream>
using namespace std;
int main(){
	short int t;
	unsigned long long a,b,c,d;
	cin >> t;
	while(t>0){
		cin >> a >> b >> c >> d;
		t--;
		cout << (c-a)+(d-b) << endl;
	}
	return 0;
}
