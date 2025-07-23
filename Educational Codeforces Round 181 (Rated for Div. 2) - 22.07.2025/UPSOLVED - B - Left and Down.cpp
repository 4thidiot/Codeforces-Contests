#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a, b, k;
	    cin>>a>>b>>k;
	    
	    if(a<=k && b<=k)
	        cout<<1<<'\n';
	    else if( a/gcd(a,b) <= k && b/gcd(a,b) <= k )
	        cout<<1<<'\n';
	    else
	        cout<<2<<'\n';
	}
    return 0;
}
