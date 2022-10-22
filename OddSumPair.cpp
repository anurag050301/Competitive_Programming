//Problem: Odd Sum Pair (CodeChef), Code:ODDSUMPAIR
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
    int a,b,c,count=0;
    cin>>a>>b>>c;
    if(a%2!=0)
        count++;
    if(b%2!=0)
        count++;
    if(c%2!=0)
        count++;
    if(count==1 or count==2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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