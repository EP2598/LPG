/*
format input
banyak titik garis
garis
garis
garis
cek terbentuk pas 2 warna
(titik ga ada yg berteman dgn 2 warna berbeda)
 */

#include <iostream>
using namespace std;
int n;

void checkarr(bool arr[])
{
	for (int i = 0; i < n; i++)
	{
		for (int ii = 0; ii < n; ii++)
		{
			cout << arr[i * n + ii];
		}
		cout << endl;
	}
}

void sort(int x[], int arr[], int start, int end)
{
	if (start >= end)
		return;
	int point = arr[end];
	int posi = start;
	//cout<<"RUN";
	for (int i = start; i < end; i++)
	{
		if (point > arr[i])
		{
			int temp = arr[posi];
			arr[posi] = arr[i];
			arr[i] = temp;
			//swap x[posi] x[i]
			temp = x[posi];
			x[posi] = x[i];
			x[i] = temp;
			posi++;
		}
	}
	int temp = arr[posi];
	arr[posi] = arr[end];
	arr[end] = temp;
	temp = x[posi];
	x[posi] = x[end];
	x[end] = temp;
	sort(x, arr, start, posi - 1);
	sort(x, arr, posi + 1, end);
}

void color(bool arr[])
{
	int* x = new int[n], * loc = new int[n], * color = new int[n];
	for (int i = 0; i < n; i++)
	{
		color[i] = 0;
		loc[i] = i;
		x[i] = 0;
		for (int ii = 0; ii < n; ii++)
		{
			x[i] += arr[i * n + ii];
		}
	}
	/*
	checkarr(arr);
	for(int i=0;i<n;i++){
		cout<<x[i]<<' ';
	}*/
	sort(loc, x, 0, n - 1);

	for (int ii = n - 1; ii >= 0; ii--) { // loop dari yang paling gede (edge terbanyak)
		for (int i = 1; i < 3; i++) { // kasi warna 1 atw 2
			bool temp = true;

			for (int j = 0; j < n; j++) { // loop semua yang berhubungan
				if (arr[loc[ii] * n + j]) { // kalo berhubungan
					if (color[j] == i) { // kalo ada warna sama skip
						temp = false;
						break;
					}
				}
			}
			if (temp) // kalo warnanya beda kasi warna itu
				color[loc[ii]] = i;
                break;
		}
		if (color[loc[ii]] == 0) { // kalo gabisa dikasi warna 1 atw 2, out dari loop
			cout << "TIDAK" << endl;
			return;
		}
	}
	cout << "YA" << endl;
}

int main()
{
	int m;
	cin >> n >> m;
	bool* arr = new bool[n * n]; // bikin array 2d jadi 1d
	for (int i = 0; i < n * n; i++)
	{
		arr[i] = false;
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		arr[a * n + b] = true;
		arr[b * n + a] = true;
	}
	//checkarr(arr, n);
	color(arr);
}