//Problem: Tasty Decisions (CodeChef), Code:TASTDEC
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
    int a,b;
    if((a*2)>(b*5))
        cout<<"Chocolate\n";
    else if((a*2)==(b*5))
        cout<<"Either\n";
    else
        cout<<"Candy\n";
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