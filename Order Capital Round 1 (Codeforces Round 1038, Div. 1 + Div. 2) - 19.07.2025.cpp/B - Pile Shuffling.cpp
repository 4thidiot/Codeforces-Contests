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
	    
	    ll ans = 0;
	    
	    while(n--)
	    {
	        ll a, b, c, d;
	        cin>>a>>b>>c>>d;
	        
	        ll a_togive = 0;
	        ll b_togive = 0;
	        
	        if( (c-a) < 0)
	            a_togive = abs(c-a);
	        if( (d-b) < 0)
	            b_togive = abs(d-b);
	            
	        if(b_togive!=0)
	            ans += b_togive + a;
            
            if(b_togive==0 && a_togive!=0)
                ans += a_togive;
	    }
	    
	    cout<<ans<<'\n';
	}
	return 0;
}
