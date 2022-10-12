// PRoblem: Card Removal (CodeChef), Code:REMOVECARDS
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n, temp = 0, a;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a]++;
    }
    for (auto itr : mp)
    {
        if (itr.second >= temp)
            temp = itr.second;
    }
    cout << n-temp << endl;
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