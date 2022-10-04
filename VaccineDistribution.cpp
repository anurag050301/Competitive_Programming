// problem: Vaccine Distribution, Code: VACCINE2
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
    int n, d, risk = 0, nrisk;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] <= 9) || (a[i] >= 80))
            risk++;
    }
    nrisk = n - risk;
    int total = risk / d + nrisk / d;
    if (risk % d)
        total++;
    if (nrisk % d)
        total++;
    cout<<total<<endl;
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