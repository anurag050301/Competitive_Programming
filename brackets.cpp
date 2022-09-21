//Brackets problem Codechef, Code:- Brackets
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <deque>
#define ll long long int
#define pb push_back
#define ppb pop_back()
using namespace std;
void solve()
{
    string s;
    int bal = 0, mbal = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            bal = bal + 1;
        }
        else
        {
            bal = bal - 1;
        }
        mbal = max(mbal, bal);
    }
    for (int i = 0; i < mbal; i++)
    {
        cout << "(";
    }
    for (int i = 0; i < mbal; i++)
    {
        cout << ")";
    }
    cout << endl;
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