#include <iostream>
#include <cmath>
using namespace std;
bool *arr;
char *ans;

void kperm(int x, int n, int k, int curr)
{
    if (x == n)
    {
        cout << ans << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!arr[i] && (abs(curr - i) <= k))
        {
            arr[i] = true;
            ans[x*2]=char(48+i);
            kperm(x+1, n, k, i);
            arr[i] = false;
        }
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    arr = new bool[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = false;
    }
    ans = new char[n * 2 - 1];
    for (int i = 0; i < n * 2 - 1; i++)
    {
        ans[i] = ' ';
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] = true;
        ans[0]=char(48+i);
        kperm(1, n, k, i);
        arr[i] = false;
    }
}