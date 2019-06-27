/*
format input
banyak titik garis
garis
garis
garis
banyak pertanyaan
pertanyaan
pertanyaan
pertanyaan
 */

#include <iostream>
using namespace std;

int matmul(bool arr[], int n, int a, int b)
{
    int count = 0;
    for (int xx = 0; xx < n; xx++)
    {
        if (arr[a * n + xx] && arr[xx * n + b])
            count++;
    }
    return count;
}

void checkarr(bool arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int ii = 0; ii < n; ii++)
        {
            cout << arr[i * n + ii];
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    bool *arr = new bool[n * n]; // bikin array 2d jadi 1d
    for (int i = 0; i < n * n; i++)
    {
        arr[i] = false;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        arr[a * n + b] = true;
        arr[b * n + a] = true;
    }
    //checkarr(arr, n);
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << matmul(arr, n, a - 1, b - 1) << endl;
    }
}