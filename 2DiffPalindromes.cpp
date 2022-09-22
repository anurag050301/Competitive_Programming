//Codechef problem - Two Different Palindromes
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
    int a, b;
    cin >> a >> b;
    if ((a % 2 == 0) && (b % 2 == 0))
        cout << "Yes" << endl;
    else if ((a % 2 != 0) && (b % 2 == 0) || (a % 2 == 0) && (b % 2 != 0))
    {
        if (a > 1 && b > 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
        cout << "No" << endl;
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