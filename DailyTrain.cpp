// Problem: Daily Trian (CodeChef), Code: DAILY.
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
long long combination(int n, int r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}
void solve()
{
    int x, n;
    cin >> x >> n;
    int final = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vector<int> arr(9, 0);
        int index = 0;

        for (int i = 0; i < 36; i = i + 4)
        {
            if (s[i] == '0')
                arr[index]++;
            if (s[i + 1] == '0')
                arr[index]++;
            if (s[i + 2] == '0')
                arr[index]++;
            if (s[i + 3] == '0')
                arr[index]++;
            index++;
        }
        index = 0;
        for (int i = 53; i > 36; i = i - 2)
        {
            if (s[i] == '0')
                arr[index]++;
            if (s[i - 1] == '0')
                arr[index]++;
            index++;
        }
        for (int i = 0; i < 9; i++)
        {
            if (arr[i] >= x)
            {
                final = final + combination(arr[i], x);
            }
        }
    }

    cout << final << endl;
}
int main()
{
    solve();
    return 0;
}