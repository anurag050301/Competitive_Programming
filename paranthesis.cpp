/* A string of paranthesis is given, fin the index from where the order is incorrect, if the order is correct the return working.If not then
return position of incorrect bracket
examples:
string="{[([])]}"
output="Working"
string="]{[[()]]}"
output=1*/

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
