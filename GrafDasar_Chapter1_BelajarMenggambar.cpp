#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    vector<bool> arr(n+1);
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a]=!arr[a];
        arr[b]=!arr[b];
    }
    int count=0;
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]){
            count++;
        }
    }
    if(count==0){
        cout<<"Tipe A\n";
    }else if(count==2){
        cout<<"Tipe B\n";
    }else{
        cout<<"Tipe C\n";
    }
}