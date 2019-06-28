#include <iostream>
using namespace std;
int ans = 0;
int x, y;

void fill(int currx, int curry)
{
    if (currx > x || curry > y)
        return;
    if (currx == x && curry == y)
    {
        ans++;
        return;
    }

    fill(currx, curry + 1);
    fill(currx + 1, curry);
}

int main()
{
    cin >> x >> y;
    fill(1, 1);
    cout << ans << endl;
    return 0;
}