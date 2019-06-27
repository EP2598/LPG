#include <iostream>
using namespace std;

int main()
{
    int A, B, C, X, i = 1;
    cin>>A>> B>> C>> X;
    int t = (A * X + B) % C;
    while (t != X)
    {
        i++;
        t = (A * t + B) % C;
    }
    cout << i << endl;
    return 0;
}