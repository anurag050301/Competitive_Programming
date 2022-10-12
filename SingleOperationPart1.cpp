// Problem: Single Operation Part 1 (CodeChef), Code:SINGLEOP1
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
    int s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    int front = s[0], count = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] <= front)
        {
            count++;
            front = s[i];
        }
    }
    cout << count << "\n";
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