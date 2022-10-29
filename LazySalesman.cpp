// Problem:Lazy Salesman (CodeChef), Code:HOLIDAYS
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
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        if (i != n - 1)
            v[i] += v[i + 1];
        if (v[i] >= w)
            break;
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