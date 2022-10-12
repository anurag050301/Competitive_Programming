//Problem: Tax in ChefLand (CodeChef), Problem: TAXES
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
    if(x>100)
        cout<<x-10<<endl;
    else
        cout<<x<<endl;
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