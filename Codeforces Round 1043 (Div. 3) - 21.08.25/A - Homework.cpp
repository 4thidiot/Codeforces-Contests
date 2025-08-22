#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    string a;
	    cin>>a;
	    ll m;
	    cin>>m;
	    string b, c;
	    cin>>b>>c;
	    
	    string e, f;
	    for(int i=0; i<m; i++)
	    {
	        if(c[i]=='V')
	            e.push_back(b[i]);
	        else
	            f.push_back(b[i]);
	    }
	    reverse(e.begin(), e.end());
	    string final = e+a;
	    final+=f;
	    cout<<final<<'\n';
	}
    return 0;
}
