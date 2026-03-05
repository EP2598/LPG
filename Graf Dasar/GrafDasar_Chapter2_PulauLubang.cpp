#include <iostream>
#include <vector>
using namespace std;
int count = 0;
int counttemp = 0;
int y, x;
void checkarr(vector<vector<bool>> arr)
{
    for (int i = 0; i < y; i++)
    {
        for (auto ii = arr[i].begin(); ii != arr[i].end(); ++ii)
            cout << *ii << " ";
        cout << endl;
    }
}
void fill(vector<vector<bool>> &arr, int yy, int xx)
{
    if (yy < 0 || xx < 0 || yy == y || xx == x)
    {
        return;
    }
    if (arr[yy][xx])
    {
        counttemp++;
        arr[yy][xx] = false;
        fill(arr, yy - 1, xx);
        fill(arr, yy, xx - 1);
        fill(arr, yy + 1, xx);
        fill(arr, yy, xx + 1);
    }
}

int main()
{
    int total = 0;
    char temp;
    cin >> y >> x;
    vector<vector<bool>> arr(y, vector<bool>(x));
    for (int i = 0; i < y; i++)
    {
        for (int ii = 0; ii < x; ii++)
        {
            cin >> temp;
            arr[i][ii] = temp % 2 == 0;
        }
    }
    //checkarr(arr);
    //cout << total << " " << count << endl;
    for (int i = 0; i < y; i++)
    {
        for (int ii = 0; ii < x; ii++)
            if (arr[i][ii])
            {
                total++;
                fill(arr, i, ii);
                if (counttemp > count)
                {
                    count = counttemp;
                }
                counttemp = 0;
            }
    }
    //checkarr(arr);
    cout << total << " " << count << endl;
    return 0;
}