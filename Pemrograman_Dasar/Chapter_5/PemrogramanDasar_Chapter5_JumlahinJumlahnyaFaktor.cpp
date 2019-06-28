/*
h(5)=f1+f2+f3+f4+f5
=1+2+2+3+2
=10
 */
#include <iostream>
#include <cmath>
using namespace std;

int prime(int x)
{
	if (x == 1)
	{
		return 1;
	}
	int count = 2;
	
	for (int i = 2; i <= (int)sqrt(x); i++)
	{
		if (x % i == 0)
		{
			count += 2;
		}
	}
	if (sqrt(x)==(int)sqrt(x))
	{
		count--;
	}
	//cout<<x<<" "<<count<<endl;
	return count;
}

int jumlahnyaFaktor(int a)
{
	int count = 0;
	for (int i = 1; i <= a; i++)
	{
		count += prime(i);
	}
	return count;
}
int main()
{
	int bil;
	cin >> bil;
	cout << jumlahnyaFaktor(bil) << endl;
}
