#include <iostream>
using namespace std;

int main(){
  int i, j, m, n;
  cin >> m;
  cin >> n;
  int matriks[m][n], transpose[m][n];
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      cin  >> matriks[i][j];
    }
  }
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << transpose[i][j] << " ";
    }
    cout << "\n";
  }
	cout << "\n";
}
