// Problem: Odd Repeat (CodeChef), Code: REPEAT
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
    int n, k, s;
    cin >> n >> k >> s;
    int b = s - pow(n, 2);
    int ans = b / (k - 1);
    cout << ans << endl;
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