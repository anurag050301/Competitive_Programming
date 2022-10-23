//Program:Maximum Length Even Subarray (CodeChef), Code:MXEVNSUB
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
    int sum=n*(n+1)/2;
        if(sum%2==0)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<n-1<<endl;
        }
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