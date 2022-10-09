// problem : New Piece (CodeChef), code:NEWPIECE
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
    int x, y, a, b;
    bool col;
    cin >> x >> y >> a >> b;
    if ((x + y) % 2 == (a + b) % 2)
    {
        if (x == a && y == b)
        {
            cout << "0" << endl;
            return;
        }
        else
        {
            cout << "2" << endl;
            return;
        }
    }
    else
    {
        cout<<"1"<<endl;
        return;
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