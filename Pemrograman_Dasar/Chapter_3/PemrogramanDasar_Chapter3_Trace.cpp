#include <iostream>
using namespace std;

int main(){
    int temp,n,tot=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int ii=0;ii<n;ii++){
            cin>>temp;
            if(i==ii){
                tot+=temp;
            }
        }
    }
    cout<<tot<<endl;
    return 0;
}