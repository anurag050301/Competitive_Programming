//Problem Chef and String Codechef, Code-RECNDSTR
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string st;
	    cin>>st;
	    int n=st.length();
	    if((st.substr(1)+st[0])==(st[n-1]+st.substr(0,n-1)))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
