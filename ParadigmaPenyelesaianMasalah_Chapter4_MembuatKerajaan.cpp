#include <iostream>
using namespace std;
int panx, pany;

long int find(int **arr, int **has)
{
    long int max = arr[0][0];
    has[0][0] = arr[0][0];
    //totalin paling atas sama paling kiri
    for (int i = 1; i < panx; i++)
    {
        has[0][i] = arr[0][i] + has[0][i - 1];
        if (has[0][i] > max)
        {
            max = has[0][i];
        }
    }
    for (int i = 1; i < pany; i++)
    {
        has[i][0] = arr[i][0] + has[i - 1][0];
        if (has[i][0] > max)
        {
            max = has[i][0];
        }
    }
    //=======================================
    //itung matriksnya=======================
    for (int i = 1; i < pany; i++)
    {
        for (int ii = 1; ii < panx; ii++)
        {
            has[i][ii] = arr[i][ii] + has[i][ii - 1] + has[i - 1][ii] - has[i - 1][ii - 1];
            if (has[i][ii] > max)
            {
                max = has[i][ii];
            }
        }
    }
    //==========================================
    //itung persegi paling atas sama paling kiri
    long int temp;
    for (int i = 0; i < pany - 1; i++)
    {
        for (int j = i + 1; j < pany; j++)
        {
            temp = has[j][0] - has[i][0];
            if (temp > max)
            {
                max = temp;
            }
        }
    }
    for (int i = 0; i < panx - 1; i++)
    {
        for (int j = i + 1; j < panx; j++)
        {
            temp = has[0][j] - has[0][i];
            if (temp > max)
            {
                max = temp;
            }
        }
    }
    //================================================
    //itung persegi sisanya==========================
    //pq rs
    for (int i = 1; i < pany - 1; i++)
    {
        for (int ii = 1; ii < panx - 1; ii++)
        {
            for (int j = i + 1; j < pany; j++)
            {
                for (int jj = ii + 1; jj < panx; jj++)
                {
                    temp =has[j][jj]-has[j][ii-1]-has[i-1][jj]+has[i-1][ii-1];
                    if (temp > max)
                    {
                        max = temp;
                    }
                }
            }
        }
    }
    return max;
}

int main()
{

    int **arr, **has;
    cin >> pany >> panx;
    arr = new int *[pany];
    has = new int *[pany];
    for (int i = 0; i < pany; i++)
    {
        arr[i] = new int[panx];
        has[i] = new int[panx];
        for (int ii = 0; ii < panx; ii++)
        {
            cin >> arr[i][ii];
        }
    }
    cout << find(arr, has) << endl;
}