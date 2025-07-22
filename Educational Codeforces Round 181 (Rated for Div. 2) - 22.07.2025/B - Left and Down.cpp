#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a, b, k;
	    cin>>a>>b>>k;
	    
	    if(a<=k && b<=k)
	        cout<<1<<endl;
	    else if(gcd(a,b)!=1)
	    {
	        ll flag=0, hcf = gcd(a,b);
	        while(hcf!=0)
	        {
	            if( (a%hcf==0 && b%hcf==0) && (a/hcf<=k && b/hcf<=k) )
	            {
	                cout<<1<<endl;
	                flag=1;
	                break;
	            }   
	            hcf--;
	        }
	        if(flag==0)
	            cout<<2<<endl;
	    }
	    else
	        cout<<2<<endl;
	}
    return 0;
}
