// Problem:Chef And Happy String (CodeChef), Code: HAPPYSTR
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
    int count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
        else
        {
            if (count > 2)
                break;
            else
                count = 0;
        }
    }
    if (count >= 3)
        cout << "Happy\n";
    else
        cout << "Sad\n";
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