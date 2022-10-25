// Problem: Lucky Lucky Number (CodeChef), Code: CHEFLUCK
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
    while (n % 7 != 0)
        n = n - 4;
    if (n < 0)
        cout << "-1"<<endl;
    else
        cout << n << endl;
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