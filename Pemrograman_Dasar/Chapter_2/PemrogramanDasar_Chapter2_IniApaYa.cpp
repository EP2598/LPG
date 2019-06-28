#include <iostream>
using namespace std;

bool checknol(char inp[])
{
	if (inp[0] == '0' && inp[1] == '\0')
		return true;
	return false;
}

bool checkalph(char inp[])
{
	short int i = 0;
	while (inp[i] != '\0')
	{
		if (!((inp[i] >= 97 && inp[i] <= 122) || inp[i] == 32))
		{
			return false;
		}
		i++;
	}
	return true;
}
bool checkposi(char inp[])
{
	short int i = 0;
	while (inp[i] != '\0')
	{
		if (!(inp[i] >= 48 && inp[i] <= 57))
		{
			return false;
		}
		i++;
	}
	return true;
}

bool checknega(char inp[])
{
	short int i = 1;
	if (inp[0] == '-')
	{
		while (inp[i] != '\0')
		{
			if (!(inp[i] >= 48 && inp[i] <= 57))
			{
				return false;
			}
			i++;
		}
		return true;
	}
	return false;
}

int main()
{
	char inp[1001] = "";
	cin >> inp;
	if (checknol(inp))
	{
		cout << "nol";
	}
	else
	{
		if (checkposi(inp))
		{
			cout << "bilangan bulat positif";
		}
		if (checknega(inp))
		{
			cout << "bilangan bulat negatif";
		}
		if (checkalph(inp))
		{
			cout << "kata";
		}
	}

	cout << endl;
}
