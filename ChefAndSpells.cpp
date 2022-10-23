// Problem:Chef And Spells (CodeChef), Code: CHSPL
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
    ll a, b, c, ou;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            if (b > c)
            {
                cout << a + b << endl;
            }
            else
            {
                cout << a + c << endl;
            }
        }
        else
        {
            cout << a + c << endl;
        }
    }
    else
    {
        if (a > c)
        {
            cout << b + a << endl;
        }
        else
        {
            cout << b + c << endl;
        }
    }
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