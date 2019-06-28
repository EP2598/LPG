#include <iostream>
using namespace std;

void hanoi(int n, int start, int end)
{
    if(n==0){
        return;
    }else{
        int x;
        if(start+end == 4){ // 1 &3
            x= 2;
        }else
        if(start+end==3){ // 1& 2
            x=3;
        }else{ //2&3
            x=1;
        }
        hanoi(n-1,start,x);
        cout<<n<<" "<<(char)(64+start)<<" "<<(char)(64+end)<<endl;
        hanoi(n-1,x,end);
    }
}
int main()
{
    int n;
    cin>>n;
    hanoi(n,1,3);
}