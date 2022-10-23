//Problem: Motivation (CodeChef), Code:IMDB
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
    int n,x,s,r,rate=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>s>>r;
        if(s<=x)
            rate=max(rate,r);
    }
    cout<<rate<<endl;
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