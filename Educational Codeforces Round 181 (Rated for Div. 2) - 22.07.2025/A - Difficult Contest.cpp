#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    sort(s.begin(), s.end());
	    reverse(s.begin(), s.end());
	    cout<<s<<endl;
	}
    return 0;
}
