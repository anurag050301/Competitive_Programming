// Problem: Chocolate Monger (CodeChef), Code: CM164364
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
    set<int> st;
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }
    cout << min((int)st.size(), n - x) << endl;
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