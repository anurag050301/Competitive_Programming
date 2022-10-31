// Problem: Maximum Trio (CodeChef), Code: MXMTRIO
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
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long ans = (a[n - 1] - a[0]) * a[n - 2];
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