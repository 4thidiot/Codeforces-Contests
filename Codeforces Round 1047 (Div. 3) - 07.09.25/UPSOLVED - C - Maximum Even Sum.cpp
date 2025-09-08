#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a, b;
	    cin>>a>>b;
	    if(b%2) //b/2 is odd
	    {
	        if(a%2)
	        {
	            ll ans = a*b+1;
	            cout<<ans<<'\n';
	        }
	        else
	        cout<<"-1\n";
	        continue;
	    }
	    ll ans = a*b/2+ 2;
	    if(ans%2)
	        cout<<"-1\n";
	    else
	        cout<<ans<<'\n';
	        
	}

}
