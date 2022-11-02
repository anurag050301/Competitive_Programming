// Problem: Maximise the Subsequence Sum (CodeChef), Code: SIGNFLIP
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
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < k; i++)
        v[i] = abs(v[i]);
    int sum = 0;
    for (auto i : v)
    {
        if (i > 0)
            sum += i;
    }
    cout << sum << endl;
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