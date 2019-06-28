#include <iostream>
using namespace std;

int main()
{
    int A, B, y;
    long x;
    cin >> A >> B >> x >> y;
    while(x<=y){
        cout<<x<<endl;
        x=A*x+B;
    }
    return 0;
}
