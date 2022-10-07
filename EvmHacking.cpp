// Problem: EVM Hacking (CodeChef), Code:EVMHACK
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
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    int hf = (x + y + z) / 2;
    if ((a + b + z > hf) || (a + y + c > hf) || (x + b + c > hf))
        cout<<"YES\n";
    else
        cout<<"NO\n";
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