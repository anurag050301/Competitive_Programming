//CodeChef problem : Break The Elements , Contest : Starter 58.
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
    ll n, ev=0,od;
    bool temp;
    cin >> n;
    vector<int> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        ev++;
    }
    ll ans=min(ev,od);
    if(ev==0 or ev==n)
    cout<<0<<endl;
    else
    cout<<ev<<endl;
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