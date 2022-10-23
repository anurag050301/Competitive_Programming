// Program: Weight Balance (CodeChef), Code:WEIGHTBL
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
    int w1, w2, x1, x2, m;
    cin>>w1>>w2>>x1>>x2>>m;
    if (((w2 - w1) <= m * x2) and ((w2 - w1) >= x1 * m))
        cout << 1 << endl;
    else
        cout << 0 << endl;
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