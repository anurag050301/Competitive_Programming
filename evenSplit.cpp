//Codechef problem - Even Splits
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
    string st;
    int n;
    cin>>n;
    cin >> st;
    if (st.size() >= 3)
    {
        sort(st.begin(), st.end());
        cout << st << endl;
    }
    else if (st == "00" || st == "11" || st == "10" || st == "01" || st == "0" || st == "1")
        cout << st << endl;
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