// Problem:Make all equal using Pairs (CodeChef), Code:PAIREQ
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<int, int> count;
    int res = 0;
    for (auto i : a)
    {
        count[i]++;
        res = max(res, count[i]);
    }
    cout << n - res << endl;
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