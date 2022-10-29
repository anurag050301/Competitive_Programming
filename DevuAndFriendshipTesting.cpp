//Problem: Devu and Friendship Testing (CodeChef), Code:CFRTEST
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
    int n;
    cin>>n;
    set <int> st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<endl;
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