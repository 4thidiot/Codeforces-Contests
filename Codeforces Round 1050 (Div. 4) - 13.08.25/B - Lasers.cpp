#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, m, x, y;
	    cin>>n>>m>>x>>y;
	    vector <ll> a(n), b(m);
	    for(auto& it : a)
	        cin>>it;
	    for(auto& it : b)
	        cin>>it;
	        
	    cout<<n+m<<'\n';
	}
    return 0;
}
