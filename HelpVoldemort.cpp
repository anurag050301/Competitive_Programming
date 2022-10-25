// Problem: Help Voldemort (CodeChef) Code: HELPVOLD
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
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans += v[i] * v[i + 1];
    }
    cout << ans << endl;
}
int main()
{
    solve();
    return 0;
}