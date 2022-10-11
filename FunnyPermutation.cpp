//Problem: Funny Permutation (CodeForces)
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
    int n;
    cin >> n;
    int k =n / 2 + 1;
    if (n == 3)
        cout << -1 << endl;
    else if (n != 3)
    {
        if (n % 2 == 0)
        {
            for (int i = n; i > 0; i--)
                cout << i << " ";
            cout << endl;
        }
        else if (n % 2 == 1)
        {
            for (int i = n; i > k; i--)
                cout << i << " ";
            for (int i = 1; i <= k; i++)
                cout << i << " ";
            cout << endl;
        }
    }
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