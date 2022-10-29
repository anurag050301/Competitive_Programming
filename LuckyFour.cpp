// Problem: Lucky Four (CodeChef), Code:LUCKFOUR
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
    int i;
    cin >> i;
    int count = 0;
    for (int j = i; j > 0;)
    {
        if (j % 10 == 4)
        {
            count = count + 1;
        }
        j = j / 10;
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