//Problem:ICPC Ballons (CodeChef), Code:BALLOON
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
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int count = 0, ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] <= 7)
            count++;
        if (count == 7)
        {
            ans = i + 1;
            count++;
        }
    }
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