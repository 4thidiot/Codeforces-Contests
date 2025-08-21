#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll cost (ll num)
{
    return ( pow(3, (num+1)) + num*(pow(3, num-1)) );
}

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll k;
	    cin>>k;
	    
	    ll x = log(k)/log(3);
	    ll numbe = pow(3, x);
	    ll rem = k - numbe;
	    
	    ll ans;
	    
	    ll one_watermelon = 3;
	    ll three_watermelon = 10;
	    ans = cost(x);
	    ans += (rem/numbe)*cost(x);
	    rem -= (rem/numbe*1.0)*numbe;
	    ans += (rem/10)*three_watermelon;
	    ans+= (rem - rem/10)*one_watermelon;
	    
	    
	    cout<<ans<<'\n';
	}
    return 0;
}
