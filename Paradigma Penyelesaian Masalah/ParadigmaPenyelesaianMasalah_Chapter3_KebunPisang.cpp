#include <iostream>
using namespace std;

int main(){
	int n;
	unsigned long long m;
	cin >> n >> m;
	unsigned long long *l = new unsigned long long [n];
	unsigned long long *r = new unsigned long long [n];
	unsigned long long *berapa = new unsigned long long [n];
	bool *cek = new bool[n];
	cek=false;
	for (int i=0; i<n; i++){
		cin >> l[i] >> r[i];
	}
	for (i=0; i<n; i++){
		for(int ii=l[i]; ii<=r[i]; ii++){
			if(cek[ii]){
				continue;
			}
			cek[ii]=true;
			berapa[ii]++;
		}
	}
}
