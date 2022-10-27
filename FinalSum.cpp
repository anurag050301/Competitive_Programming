// Problem: Final Sum (CodeChef), Code: FINALSUM
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
    int n, q, r, l, sum = 0;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    while (q--)
    {
        cin >> r >> l;
        if ((r - l) == 0)
            sum++;
        else if ((r - l) % 2 == 0)
            sum++;
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