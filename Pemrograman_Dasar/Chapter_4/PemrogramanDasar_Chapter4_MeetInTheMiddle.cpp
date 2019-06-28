#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *x = new int[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<x[i/2];
        }
        else{
            cout<<x[(n-i/2)-1];
        }
        if(i==n-1){
            break;
        }
        cout<<" ";
    }
    cout<<endl;
    return 0;
}