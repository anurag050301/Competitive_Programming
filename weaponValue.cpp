// problem: Weapon Value (CodeChef) , Code: SC31
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
    cin >> n;
    int a[10] = {0};
    while (n--)
    {
        string s;
        cin >> s;
        int a1[10];
        for (int i = 0; i < 10; i++)
            a1[i] = s[i] - '0';
        for (int i = 0; i < 10; i++)
            a[i] = a[i] ^ a1[i];
    }
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 1)
            sum++;
    }
    cout << sum << endl;
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