// Problem: Jenga Night (CodeChef), Code:JENGA
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
    int n, x;
    cin >> n >> x;

    if (n == x)
        cout << "YES" << endl;
    else if (x % n == 0)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
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