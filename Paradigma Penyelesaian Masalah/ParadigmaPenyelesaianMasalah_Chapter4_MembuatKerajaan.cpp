#include <iostream>

using namespace std;
int panx, pany;
/*
#include <stdio.h>
#include <windows.h>
void check(int x, int y, int xx, int yy)
{
    printf("%d %d %d %d\n", x, y, xx, yy);
    for (int start = 0; start < y; start++)
    {
        for (int i = 0; i < panx; i++)
        {
            cout << ".";
        }
        cout << endl;
    }
    for (int start = y; start <= yy; start++)
    {
        for (int i = 0; i < x; i++)
        {
            cout << ".";
        }
        for (int i = x; i <= xx; i++)
        {
            cout << "*";
        }
        for (int i = xx + 1; i < panx; i++)
        {
            cout << ".";
        }
        cout << endl;
    }
    for (int start = yy + 1; start < pany; start++)
    {
        for (int i = 0; i < panx; i++)
        {
            cout << ".";
        }
        cout << endl;
    }
    Sleep(1000);
    system("cls");
}
 */


long int find(int **arr, int **has)
{
    long int max = arr[0][0];
    has[0][0] = arr[0][0];
    //totalin paling atas sama paling kiri
    for (int i = 1; i < panx; i++)
    {
        has[0][i] = arr[0][i] + has[0][i - 1];
    }
    for (int i = 1; i < pany; i++)
    {
        has[i][0] = arr[i][0] + has[i - 1][0];
    }
    //=======================================
    //itung matriksnya=======================
    for (int i = 1; i < pany; i++)
    {
        for (int ii = 1; ii < panx; ii++)
        {
            has[i][ii] = arr[i][ii] + has[i][ii - 1] + has[i - 1][ii] - has[i - 1][ii - 1];
        }
    }
    //====================================
    //itung kemungkinan persegi panjang laen
    int temp;
    for (int y = 0; y < pany; y++)
    {
        for (int x = 0; x < panx; x++)
        {
            for (int i = y; i < pany; i++)
            {
                for (int ii = x; ii < panx; ii++)
                {

                    //check(x, y, ii, i);
                    temp = has[i][ii];
                    if (x - 1 >= 0)
                    {
                        temp -= has[i][x - 1];
                    }
                    if (y - 1 >= 0)
                    {
                        temp -= has[y - 1][ii];
                    }
                    if (y - 1 >= 0 && x - 1 >= 0)
                    {
                        temp += has[y - 1][x - 1];
                    }
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