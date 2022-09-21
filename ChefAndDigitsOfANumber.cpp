#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <utility>
#define ll long long int
using namespace std;
void solve()
{
    ll x = 0, y = 0, n;
    string st;
    cin >> st;
    for (ll i = 0; st[i] != '\0'; i++)
    {
        if (st[i] == '0')
            x++;
        else
            y++;
    }
    if (x == 1 || y == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}