//Problem: Compare T-Shirt Sizes (CodeForces)
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
    string a, b;
    cin >> a >> b;
    if (a == b)
        cout << "=\n";
    else if (a[a.size() - 1] == b[b.size() - 1])
    {
        if (a.size() > b.size() and a[a.size() - 1] == 'S')
            cout << "<\n";
        else if (a.size() < b.size() and a[a.size() - 1] == 'S')
            cout << ">\n";
        else if (a.size() < b.size() and a[a.size() - 1] == 'L')
            cout << "<\n";
        else if (a.size() > b.size() and a[a.size() - 1] == 'L')
            cout << ">\n";
    }
    else if((a[a.size() - 1] =='L') and ((b[b.size() - 1]=='M')||(b[b.size() - 1]=='S')))
        cout<<">\n";
    else if((a[a.size() - 1] =='S') and ((b[b.size() - 1]=='L')||(b[b.size() - 1]=='M')))
        cout<<"<\n";
    else if((a[a.size() - 1] =='M') and (b[b.size() - 1]=='L'))
        cout<<"<\n";
    else if((a[a.size() - 1] =='M') and (b[b.size() - 1]=='S'))
         cout<<">\n";
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