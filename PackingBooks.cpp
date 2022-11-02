//Problem: Packing Books (CodeChef), Code: BOOKPACK
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
    int x,y,z;
    cin>>x>>y>>z;
    int count=y/z;
    if(y%z!=0)
        count++;
    count*=x;
    cout<<count<<endl;
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