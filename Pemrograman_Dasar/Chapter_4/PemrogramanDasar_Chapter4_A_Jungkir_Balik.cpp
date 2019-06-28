#include <iostream>
using namespace std;

int main()
{
    short int n;
    cin >> n;
    short int *a = new short int[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
      cout<<a[i]<<endl;
    }
}