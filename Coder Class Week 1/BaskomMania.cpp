#include <iostream>
using namespace std;
int main(){
	int t;
	int m,n,k,temp=0;
	cin >> t;
	int hasil[t];
	for(int i=0;i<t;i++){
		cin >> m >> n >> k;
		int a[n];
		for(int ii=0;ii<n;ii++){
			cin >> a[ii];
			temp+=a[ii];
		}
		hasil[i]=-1;
		if((k*n)-temp<=0){
			bool lanjut=1;
			int j=0;
			while(lanjut){
				m=m+k-a[j%3];
				if(m<0){
					hasil[i]=j-1;
					lanjut=0;
				}
				j++;
			}
		}
	}
	for(int i=0;i<t;i++){
		cout << hasil[i] << endl;
	}	
}
