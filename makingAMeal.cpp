//problem:  MAking a Meal, Code: CFMM
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n;
    cin >> n;
    const string codechef = "codehf";
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    map<char, int> m;
    for (string x : arr)
    {
        for (char ch : x)
        {
            m[ch]++;
        }
    }
    int count = INT_MAX;
    m['c'] /= 2;
    m['e'] /= 2;
    for (char alpha : codechef)
    {
        count = min(count, m[alpha]);
    }
    cout << count << endl;
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