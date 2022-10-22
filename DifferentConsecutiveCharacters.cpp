//Problem: Different Consicutive Charater (CodeChef), Code:DIFFCONSEC
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
    int n,count=0;
    string s;
    cin>>n>>s;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        count++;
    }
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