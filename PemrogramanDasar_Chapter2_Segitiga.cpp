#include <iostream>
using namespace std;

int main()
{
    short int a, b, c;
    
    cin >> a >> b >> c;

    if (a + b > c){
      if (a + c > b){
        if (b + c > a){
          cout << "segitiga";
        }
      }
    }
    else{
      cout << "bukan segitiga";
    }
}
