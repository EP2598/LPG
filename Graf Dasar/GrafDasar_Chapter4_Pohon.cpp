#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>x;
    }
    float xx = log2(n);
    cout<< n+1 - pow(2,floor(xx))<<" "<<ceil(xx)<<endl;
}