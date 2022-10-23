//Prblem: Programming Language (CodeChef), Code:PROGLANG
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
    int a[6];
	    for(int i=0;i<6;i++)
	    {cin>>a[i];}
	    if((a[0]==a[2]||a[0]==a[3])&&(a[1]==a[2]||a[1]==a[3]))
	    {
	        cout<<1<<endl;
	    }
	    else if((a[0]==a[4]||a[0]==a[5])&&(a[1]==a[4]||a[1]==a[5]))
	    {
	        cout<<2<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
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