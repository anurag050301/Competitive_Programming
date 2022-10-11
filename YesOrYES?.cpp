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
    string st;
    cin>>st;
    if((st[0]=='Y' || st[0]=='y') && (st[1]=='E' || st[1]=='e') && (st[2]=='S' || st[2]=='s'))
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