#include <iostream>
using namespace std;
int main(){
	int t;
	unsigned long long toni,tere;
	string hasil[1001];
	cin >> t;
	for(int i=0; i<t;i++){
		cin >> toni >> tere;
		if (toni==tere){
		hasil[i]="Voting Ulang";
		}
			else if (toni>tere){
				hasil[i]="Tere";
			}
				else if (tere>toni){
					hasil[i]="Toni";
				}
				
	}
	for(int i=0; i<t;i++){
		cout << hasil[i] << endl;
			}
	return 0;
}
