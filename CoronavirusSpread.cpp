// problem: Coronavirus Spread, code: COVID19
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
    int n, count = 1;
    cin >> n;
    vector<int> a(n), b;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i - 1]) <= 2)
        {
            count++;
        }
        else if (abs(a[i] - a[i - 1]) > 2)
        {
            b.push_back(count);
            count = 1;
        }
    }
    b.push_back(count);
    sort(b.begin(), b.end());
    cout << b[0] << " " << b[b.size() - 1] << endl;
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
