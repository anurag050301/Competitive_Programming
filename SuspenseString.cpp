// Problem: Suspense String (CodeChef). Code: SUSSTR
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
    int n;
    string st;
    cin >> n >> st;
    int i = 0, j = n - 1;
    deque<char> te = {};
    bool turn = false;
    while (i <= j)
    {
        if (st[i] == '0')
            te.push_front('0');
        else
            te.push_back('1');
        i++;
        if (i > j)
            break;
        if (st[j] == '0')
            te.push_back('0');
        else
            te.push_front('1');
        j--;
    }
    while (!te.empty())
    {
        cout << te.front();
        te.pop_front();
    }
    cout << endl;
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