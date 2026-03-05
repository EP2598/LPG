#include <iostream>
using namespace std;

int main()
{
	int n, a, b, jml, i;
	jml=0;
	cin >> n >> a >> b;
	for(i=a;i<=n;i+a){
		jml++;
	}
	for(i=b;i<=n;i+b){
		if(i%a==0)
		continue;
		
		jml++;
	}
	cout << jml << endl;
}
