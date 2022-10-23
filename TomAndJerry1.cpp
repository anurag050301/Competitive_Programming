// Problem:Tom And Jerry 1 (CodeChef), Code:TANDJ1
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
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    int x = abs(a - c);
    int y = abs(b - d);

    if ((x + y) > k)
        cout << "NO"<<endl;
    else if ((x + y) == k)
        cout << "YES"<<endl;
    else if ((k - (x + y)) % 2 == 0)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
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