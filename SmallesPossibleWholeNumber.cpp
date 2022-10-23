//Problem:Smallest Possible Whole Number (CodeChef), Code:SMOL
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
    long long int n,k;
    cin>>n>>k;
    if(k==0)
        cout<<n<<endl;
    else
        cout<<n%k<<endl;
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