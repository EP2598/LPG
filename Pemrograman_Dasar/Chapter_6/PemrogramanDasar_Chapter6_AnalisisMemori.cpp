#include <iostream>
#include <cmath>
using namespace std;

int segtree(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 1+segtree(n/2)+segtree(ceil((float)n/2));
}

int main()
{
    int n;
    cin >> n;
    cout << segtree(n) << endl;
}