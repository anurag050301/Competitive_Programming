// Problem:Maximise Function (CodeChef), Code:MAXFUN
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
    cout << abs(a[0] - a[1]) + abs(a[1] - a[n - 1]) + abs(a[n - 1] - a[0]) << endl;
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