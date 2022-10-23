// Problem: Turn it (CodeChef), Code:NFS
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
    int u, v, a, s;
    cin >> u >> v >> a >> s;
    if (pow(v, 2) >= (pow(u, 2) - 2 * a * s))
        cout << "Yes\n";
    else
        cout << "No\n";
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