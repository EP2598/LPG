/*
format input
banyak titik garis
garis
garis
garis
cek terbentuk pas 2 warna
(titik ga ada yg berteman dgn 2 warna berbeda)
 */

#include <iostream>
using namespace std;
int n;

void checkarr(bool arr[])
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

void sort(bool x[], int arr[], int start, int end)
{
    if (start >= end)
        return;
    int point = arr[end];
    int posi = start;
    cout<<"RUN";
    for (int i = start; i < end; i++)
    {
        if (point > arr[i])
        {
            int temp = arr[posi];
            arr[posi] = arr[i];
            arr[i] = temp;
            //swap x[posi] x[i]
            bool temp1;
            for (int ii = 0; ii < n; ii++)
            {
                temp1 = x[posi * n + ii];
                arr[posi * n + ii] = x[i * n + ii];
                x[i * n + ii] = temp1;
            }
            posi++;
        }
    }
    int temp = arr[posi];
    arr[posi] = arr[end];
    arr[end] = temp;
    bool temp1;
    for (int ii = 0; ii < n; ii++)
    {
        temp1 = x[posi * n + ii];
        arr[posi * n + ii] = x[end * n + ii];
        x[end * n + ii] = temp1;
    }
    sort(x, arr, start, posi - 1);
    sort(x, arr, posi-1, end);
}

void color(bool arr[])
{
    int *x = new int[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = 0;
        for (int ii = 0; ii < n; ii++)
        {
            x[i] += arr[i * n + ii];
        }
    }
    checkarr(arr);
    for(int i=0;i<n;i++){
        cout<<x[i]<<' ';
    }
    sort(arr, x, 0, n - 1);
    for(int i=0;i<n;i++){
        cout<<x[i]<<' ';
    }
}

int main()
{
    int m;
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
    color(arr);
}