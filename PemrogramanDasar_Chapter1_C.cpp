#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int temp, out = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> temp;
        out += temp;
    }
    cout << fixed << setprecision(9) << (double)out / 6 << endl;
}
