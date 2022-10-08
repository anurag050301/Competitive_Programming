// Problem : Simple Statistics (CodeChef) , Code:SIMPSTAT
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <utility>
#include <iomanip>
#define ll long long int
using namespace std;
void solve()
{
    int n, x;
    long long int sum = 0;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = x; i < n - x; i++)
        sum += a[i];
    double avg = sum / double(n - 2 * x);
    cout << setprecision(6) << fixed << avg << endl;
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