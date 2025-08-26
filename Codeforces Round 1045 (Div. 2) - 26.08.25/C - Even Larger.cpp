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
	    vector <ll> v(n);
	    for(auto &it: v)
	        cin>>it;
	    
	    ll ops = 0;
	    
	    if(n%2==1)
	    {
	        for(int i=0; i<n; i++)
	        {
	            if(i%2==1)
	            {
	                if(v[i]<v[i-1])
	                {
	                    ops+=v[i-1]-v[i];
	                    v[i-1]-=(v[i-1]-v[i]);
	                }
	                if( (v[i+1]+v[i-1]) > v[i] )
	                {
	                    ops += v[i+1]+v[i-1] - v[i];
	                    v[i+1]-= (v[i+1]+v[i-1] - v[i]);
	                }
	            }
	        }
	    }
	    else
	    {
	        for(int i=0; i<n-1; i++)
	        {
	            if(i%2==1)
	            {
	                if(v[i]<v[i-1])
	                {
	                    ops+=v[i-1]-v[i];
	                    v[i-1]-=(v[i-1]-v[i]);
	                }
	                if( (v[i+1]+v[i-1]) > v[i] )
	                {
	                    ops += v[i+1]+v[i-1] - v[i];
	                    v[i+1]-= (v[i+1]+v[i-1] - v[i]);
	                }
	            }
	        }
	        if(v[n-1]<v[n-2])
	            ops+=v[n-2]-v[n-1];
	    }
	    
	    cout<<ops<<'\n';
	}
    return 0;
}
