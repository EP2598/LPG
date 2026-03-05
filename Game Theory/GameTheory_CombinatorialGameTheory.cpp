//mesti pake minimax algorithm

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    short int *x = new short int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int start = 0, end = n - 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (x[start] > x[end])
            {
                count += x[start];
                start++;
            }
            else
            {
                count += x[end];
                end--;
            }
        }
        else
        {
            if (x[start] > x[end])
            {
                //count += x[start];
                start++;
            }
            else
            {
                //count += x[end];
                end--;
            }
        }
    }
    cout << count << endl;
    return 0;
}