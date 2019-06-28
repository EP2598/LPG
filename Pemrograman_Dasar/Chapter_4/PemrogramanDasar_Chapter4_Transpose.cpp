#include <iostream>
using namespace std;

int main(){
  int i, j, m, n;
  cin >> m;
  cin >> n;
  int *matriks = new int[m*n], *transpose= new int[m*n];
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      cin  >> matriks[i*n+j];
    }
  }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j*m+i] = matriks[i*n+j];
    }
  }
  for (i = 0; i < n; i++){
    for (j = 0; j < m-1; j++){
      cout << transpose[i*m+j] << " ";
    }
    cout<<transpose[i*m+m-1]<<endl;
  }
}
