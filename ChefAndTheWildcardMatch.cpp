// Problem: Chef and The Wildcard Match (CodeChef), Code: TWOSTR
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
    string st1, st2;
    bool flag = true;
    cin >> st1 >> st2;
    for (int i = 0; i < st1.size(); i++)
    {
        if (st1[i] != st2[i])
        {
            if((st1[i]!='?') && (st2[i]!='?'))
            {
                flag = false;
            }
            else
                continue;
        }
    }
    if(flag==true)
        cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
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