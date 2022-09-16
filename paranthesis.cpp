#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
            st.push(s[i]);
        else
        {
            if (st.empty() && i == 0)
            {
                cout << 1<<endl;
                break;
            }
            else if ((st.top() == '(' && s[i] == ')') || (st.top() == '[' && s[i] == ']') || (st.top() == '{' && s[i] == '}'))
            {
                st.pop();
            }
            else
            {
                cout << i+1 << endl;
                break;
            }
        }
        if (i == s.size() - 1 && st.empty())
        {
            cout << "working";
        }
    }
    return 0;
}