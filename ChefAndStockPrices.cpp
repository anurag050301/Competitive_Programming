//Program:Chef And Stock Prices (CodeChef), Code:CSTOCK
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
    double a,b,c,s;
    cin>>s>>a>>b>>c;
    s=s+(s*c/100);
    if(s<=b and s>=a)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
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