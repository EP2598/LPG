#include <iostream>
using namespace std;

int main(){
/*Deskripsi
Format Masukan
Baris pertama berisi sebuah bilangan bulat N, banyak peserta Mas Universe.

Baris kedua berisi N buah bilangan bulat Pi, tingkat kekuatan tiap peserta.

Format Keluaran
Satu baris berisi sebuah bilangan bulat, tingkat kekuatan Mas Universe yang pertama.*/
	int n, i, x=0;
	cin >> n;
	int kekuatan[n];
	for (i=0; i<n; i++){
		cin >> kekuatan[i];
		if (x<kekuatan[i]){
			x=kekuatan[i];
		}
	}
	cout << x << "\n";
}
