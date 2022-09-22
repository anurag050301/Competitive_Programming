//Codechef problem - Non-Negative Product
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
    bool z = false;
    int n, count = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
            count++;
        else if(a[i]==0)
        z=true;
    }
    sort(a.begin(), a.end());
    if ((count % 2 != 0) && z == false)
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