#include <iostream>
using namespace std;

void mengurutkanHarga(int n, int harga[]){
	int temp;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(harga[i]>harga[j]){
				temp=harga[i];
				harga[i]=harga[j];
				harga[j]=temp;
				cout << i+1 << " " << j+1 << endl;
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	int harga[n];
	for (int i=0;i<n;i++){
		cin>>harga[i];
	}
	mengurutkanHarga(n,harga);
}
