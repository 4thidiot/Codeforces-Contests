#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a, b, c, d;
	    cin>>a>>b>>c>>d;
	    
	    c-=a;
	    d-=b;
	    ll flag=0;
	    if(a>b)
	    {
	        if( b < ceil((a-2)/2.0) )
	            flag=1;
	    }
	    else if(a<b)
	    {
	        if( a < ceil((b-2)/2.0) )
	            flag=1;
	    }
	    
	    if(c>d)
	    {
	        if( d < ceil((c-2)/2.0) )
	            flag=1;
	    }
	    else if(c<d)
	    {
	        if( c < ceil((d-2)/2.0) )
	            flag=1;
	    }
	    
	    if(flag==1)
	        cout<<"NO\n";
	    else 
	        cout<<"YES\n";
	}
    return 0;
}
