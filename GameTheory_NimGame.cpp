//mesti ganjil
#include <iostream>
using namespace std;

int main()
{
    int n;
    long int temp;
    bool x = false;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>temp;
        if(temp%2==1)
            x=!x;
    }
    if(x){
        cout<<"YA\n";
    }else{
        cout<<"TIDAK\n";
    }
    return 0;
}