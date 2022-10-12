//Problem: Chef And Street Food (CodeChef). COde:STFOOD
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
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int s,p,v;
        cin>>s>>p>>v;
        ans=max(ans,p/(s+1)*v);
    }
    cout<<ans<<endl;
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