#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        char s[1001];
        cin >> s;
        bool cond = true;
        int lenn = strlen(s);
        for (int i = 0; i < lenn; i++)
        {
            if(s[i]!=s[lenn-1-i]){
                cond=false;
                break;
            }
        }
        if(cond){
            cout<<"palindrom\n";
        }else{
            cout<<"bukan palindrom\n";
        }
    }
}