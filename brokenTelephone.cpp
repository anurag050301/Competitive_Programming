//Broken Telephone problem CodeChef, Code:BROKPHON
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool temp;
        int n, count = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            if ((a[i] != a[i - 1]) && !temp)
            {
                count += 2;
                temp = true;
            }
            else if ((a[i] != a[i - 1]) && temp)
                count++;
            else
                temp = false;
        }
        cout << count << endl;
        temp=false;
    }
    return 0;
}
