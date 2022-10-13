//Problem: Sum (CodeForces)
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
    vector <int> a(3);
    for(int i=0;i<3;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    if(a[2]==a[0]+a[1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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