// Problem: Gift Shop and Coupon (CodeChef), Code:GFTSHP
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i;
    for (i = 0; i < v.size(); i++)
    {
        if (k < (v[i] + 1) / 2)
            break;
        k -= v[i];
    }
    cout << i << endl;
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