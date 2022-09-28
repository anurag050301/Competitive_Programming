//CodeChef problem : Ranklist Pages , Contest : Starter 58.
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
    int x;
    cin>>x;
    if(x%25!=0)
    cout<<x/25+1<<endl;
    else
    cout<<x/25<<endl;
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