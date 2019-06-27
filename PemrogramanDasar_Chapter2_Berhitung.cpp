#include <iostream>
using namespace std;

int main()
{
	int a, b;
	char op;
	cin >> a >> op >> b;
	switch (op)
	{
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;
	case '%':
		cout << a % b;
		break;
	default:
		return 0;
		break;
	}
	cout<<endl;
}
