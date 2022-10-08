// Problem: Chef and Coupon (Codechef) , Code: COUPON2
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
    int d, co;
    cin >> d >> co;
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    int sumA = a + b + c, sumB = x + y + z, total;
    if ((sumA >= 150) && (sumB >= 150))
        total = sumA + sumB + co;
    else if ((sumA >= 150 && sumB < 150) || (sumA < 150 && sumB >= 150))
    {
        total =sumA + sumB + co + d;
    }
    else
    {
        total = sumA + sumB + d + d;
    }
    if (total < sumA + sumB + d + d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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