//Problem: Stripes (CodeForces)
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
    string s[8];
    bool count = 0;
    for (int i=0;i<8;i++)
    {
        cin >> s[i];
        if (s[i] == "RRRRRRRR")
            count = true;
    }
    if (count)
        cout << 'R'<<endl;
    else
        cout << 'B'<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}