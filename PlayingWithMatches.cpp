// Problem: Playing with Matches (CodeChef), CodeL:MATCHES
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
    int a, b, r, s, count = 0;
    cin >> a >> b;
    s = a + b;
    while (s > 0)
    {
        r = s % 10;
        s = s / 10;
        if (r == 0 || r == 6 || r == 9)
            count += 6;
        else if (r == 2 || r == 3 || r == 5)
            count += 5;
        else if (r == 4)
            count += 4;
        else if (r == 1)
            count += 2;
        else if (r == 7)
            count += 3;
        else if (r == 8)
            count += 7;
    }
    cout << count << endl;
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