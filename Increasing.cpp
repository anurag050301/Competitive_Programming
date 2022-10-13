//Problem: Increasing (CodeForces)
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <set>
#include <queue>
#include <deque>
#include <utility>
#include <map>
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
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES"<<endl;
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