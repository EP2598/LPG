#include <iostream>
using namespace std;

void subswit(char arr[], int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int n, x;
    cin >> n >> x;
    char *arr = new char[n];
    cin >> arr;
    for (int i = 0; i < x; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        b--;
        c--;
        if (a == 1)
        {
            char temp = arr[b];
            arr[b] = arr[c];
            arr[c] = temp;
        }
        else
        {
            subswit(arr, b, c);
        }
    }
    cout<<arr<<endl;
    return 0;
}