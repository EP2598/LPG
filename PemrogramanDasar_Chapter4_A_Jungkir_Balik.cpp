#include <iostream>
using namespace std;

int main()
{
    short int n, i;
    cin >> n;
    short int a[n];
    while (n > 0){
      cin >> a[n-1];
      n--;
      i++;
    }
    while (n<i){
      cout << a[n] << endl;
      n++;
    }
}