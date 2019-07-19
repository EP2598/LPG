#include <iostream>
using namespace std;
int func(int m, int n, int k, int temp, int a[]){
			int hasil;
			bool lanjut=1;
			int ii=0;
			int j=0;
			while(j==0){
				m=m+n*k-temp;
				if(m<=0){
				j=ii;
				m=m-n*k+temp;
				while(lanjut){
				m=m+k;
				if(m<a[j%n]){
					continue;
				}
				m=m-a[j%n];
				j++;
				if(m==0){
					hasil=j;
					lanjut=0;
				}
				}
				}
			ii+=n;
			}
	return hasil;
}

int main(){
	short int t;
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
	if((k*n)-temp<0){
	hasil[i]=func(m,n,k,temp,a);;
	}
	temp=0;
	}
	for(int i=0;i<t;i++){
		cout << hasil[i] << endl;
	}
	return 0;
}
