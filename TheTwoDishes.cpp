// Problem: The Two Dishes (CodeChef). Code: MAX_DIFF
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
    int n, s;
    cin >> n >> s;
    if (n >= s)
        cout << s << endl;
    else if (n < s)
        cout << abs((s - n) - n) << endl;
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