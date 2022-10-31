// Problem: Points And Lines (CodeChef), Code: POLIN
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
    int n, a, b;
    cin >> n;
    set<int> x;
    set<int> y;
    for (int j = 0; j < n; j++)
    {
        cin >> a >> b;
        x.insert(a);
        y.insert(b);
    }
    cout << x.size() + y.size() << endl;
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