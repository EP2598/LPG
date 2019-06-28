/*
3 1
3
1 2
 */

#include <iostream>
using namespace std;

int main()
{
    int n, k,temp;
    cin >> n >> k;
    bool *x = new bool[n];
    for(int i=0;i<n;i++){
        x[i]=false;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> temp;
        x[temp-1]=true;
    }
    temp=0;
    for (int i = 1; i <= n; i++)
    {   
        if(x[i-1]){
            temp++;
            continue;
        }
        if(k-temp == n-i){
            cout<<i<<endl;
            break;
        }
        cout<<i<<" ";
    }
    return 0;
}