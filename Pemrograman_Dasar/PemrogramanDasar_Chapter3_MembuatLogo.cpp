#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> y >> x >> z;
    for (int i = 0; i < z; i++)
    {
        for (int ii = 0; ii < x; ii++)
        {
            cout << '*';
        }
        cout << endl;
    } //bagian atas

    for (int i = 0; i < y - z * 2; i++)
    {
        for (int ii = 0; ii < z; ii++)
        {
            cout << '*';
        }
        for (int ii = 0; ii < x - z; ii++)
        {
            cout << '.';
        }
        cout << endl;
    } //bagian tengah

    for (int i = 0; i < z; i++)
    {
        for (int ii = 0; ii < x; ii++)
        {
            cout << '*';
        }
        cout << endl;
    } //bagian bawah

    return 0;
}