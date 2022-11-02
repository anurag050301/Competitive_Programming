// Program: Deputy Chef (CodeChef), Code: DEPCHEF
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
    ll n;
	    cin >> n;
	    
	    vector<ll> a(n), d(n);
	    for (auto &e : a) cin >> e;
	    for (auto &e : d) cin >> e;
	    
	    ll m = -1;
	    
	    if (a[1] + a[n - 1] < d[0]) m = max(m, d[0]);
	    
	    for(ll i = 1; i < n - 1; ++i) {
	        if (a[i - 1] + a[i + 1] < d[i])
	            m = max(m, d[i]);
	    }
	    
	    if (a[0] + a[n - 2] < d[n - 1]) m = max(m, d[n - 1]);
	    
	    cout << m << endl;
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