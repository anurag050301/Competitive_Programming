// Problem: Version Control System (CodeChef) , Code:VCS
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <utility>
#include <map>
#define ll long long int
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    map<int, int> mp;
    int ti = 0, uu = 0;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    for (int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
    }
    int i = 1;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > 1)
            ti++;
        uu++;
    }
    cout << ti << " " << n - uu << "\n";
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