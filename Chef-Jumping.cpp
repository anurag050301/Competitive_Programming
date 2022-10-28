// Problem: Chef-Jumping (CodeChef), Code:OJUMPS
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
    long long int a;
    cin >> a;
    if (a % 6 == 0 || a % 6 == 1 || a % 6 == 3)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
int main()
{
    solve();
    return 0;
}