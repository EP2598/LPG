#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	//Inequality of Triangle : If a+b>c && a+c>b && b+c>a then triangle.
	if(a+b>c&&a+c>b&&b+c>a)
		cout << "segitiga" << endl;
	else
		cout << "bukan segitiga" << endl;
}
