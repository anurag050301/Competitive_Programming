//CodeChef problem : Remove Bad Elements , Contest : Starter 58.
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    int count = 1, res = a[0], temp = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            temp++;
        else
            temp = 1;

        if (temp > count)
        {
            count = temp;
            res = a[i - 1];
        }
    }
    cout<<n-count<<endl;
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