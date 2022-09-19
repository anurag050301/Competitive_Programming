//Average Number problem CodeChef, Code-AVG.
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, v, sum = 0, ans;
        cin >> n >> k >> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        if ((v * (k + n) - sum) % k != 0)
            cout << -1 << endl;
        else
        {
            ans = (v * (k + n) - sum) / k;
            if (ans <= 0)
                ans = -1;
            cout << ans << endl;
        }
    }
    return 0;
}
