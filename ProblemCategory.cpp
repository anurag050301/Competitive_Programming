//Problem: Problem Category (CodeChef),Code:PROBCAT
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
    if(x>=1 and x<100)
        cout<<"Easy\n";
    else if(x>=100 and x<200)
        cout<<"Medium\n";
    else
        cout<<"Hard\n";
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