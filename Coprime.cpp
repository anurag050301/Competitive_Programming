// Problem: Coprime (CodeForces)
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
    vector<int> v(1001, 0);
    int n, ans = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        v[temp] = i;
    }
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (v[i] && v[j] && int(__gcd(i, j)) == 1)
                ans = max(ans, v[i] + v[j]);
        }
    }
    cout << ans << endl;
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