//ICPC Balloons problem CodeChef, Code-BALLOON
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        int count = 0, ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] <= 7)
                count++;
            if (count == 7)
            {
                ans = i + 1;
                count++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
