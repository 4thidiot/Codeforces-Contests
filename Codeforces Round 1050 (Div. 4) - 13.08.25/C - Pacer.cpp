#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, m;
	    cin>>n>>m;
	    vector <ll> a(n+5), b(n+5);
	    
	    a[0]=0; 
	    b[0]=0;       
        for (int i=1; i<=n; i++)
            cin>>a[i]>>b[i];
        a[n+1]=m; b[n+1]=-1;
	    
	    ll count = 0;
	    
	    for(int i=0; i<=n; i++)
	    {
	        
	        ll a_change = a[i+1]-a[i];
	        if(b[i+1]==-1)
	        {
	            count+=a_change;
	        }
	        else if(b[i+1]==b[i])
	        {
	            count+=a_change;
	            if(a_change%2!=0)
	                count-=1;
	        }
	        else
	        {
	            count+=a_change;
	            if(a_change%2==0)
	                count-=1;
	        }
	       // if( (a[i+1]-a[i])%2==0 )
	       // {
	       //     //count += (a[i+1]-a[i]);
	       //     if(b[i]!=b[i+1])
	       //         count-=2;
	       // }
	       // else if ( (a[i+1]-a[i])%2==1 && (a[i+1]-a[i])>1 )
	       // {
	       //     //count += (a[i+1]-a[i]);
	       //     if(b[i]==b[i+1])
	       //         count-=2;
	       // }
	       // else
	       // {
	       //     if(b[i]==b[i+1])
	       //         count--;
	       // }
	    }
	    
	   // if( (a[0]%2) != (b[0]%2) && a[0])
	   //     count-=2;
	   // if( (a[n-1]%2) != (b[n-1]%2) && a[n-1]!=m)
	   //     count-=2; 
	        
	   cout<<count<<'\n';
	    
	}
    return 0;
}
