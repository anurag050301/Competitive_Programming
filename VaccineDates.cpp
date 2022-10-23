//Problem: Vaccine Dates (CodeChef), Code:VDATES
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
    int d,l,r;
    cin>>d>>l>>r;
    if(d<l)
        cout<<"Too Early"<<endl;
    else if(d>=l and d<=r)
        cout<<"Take second dose now"<<endl;
    else
        cout<<"Too Late\n";
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