// Problem: Palindrome Flipping (CodeChef),Code:FLIPPAL
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
    int n, a = 0, b = 0;
    cin >> n;
    string st;
    cin >> st;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '1')
            a++;
        else
            b++;
    }
    if (n == 2)
    {
        if (st[0] == st[1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }
    else
    {
        if (n % 2 == 1)
            cout << "YES" << endl;
        else
        {
            if (a % 2 == 1 && b % 2 == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
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