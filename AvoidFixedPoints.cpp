//Problem: Avoid Fixed Points (CodeChef), Code: NOFIX
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
    int n,count=1,ans=0;
    cin>> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0; i<n; i++){
	        if(a[i]==count){
	            count++; 
				ans++;               
	        }
			count++;
	    }
        cout<<ans<<endl;
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