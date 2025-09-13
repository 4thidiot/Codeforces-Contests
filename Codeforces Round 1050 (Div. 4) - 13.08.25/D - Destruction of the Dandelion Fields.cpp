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
	    for(auto& it : v)
	        cin>>it;
	    
	    vector <ll> odd, even;
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]%2==1)
	            odd.push_back(v[i]);
	        else
	            even.push_back(v[i]);
	    }
	    sort(odd.begin(), odd.end());
	    
	    ll ans = 0;
	    for(int i=0; i<n; i++)
	        ans+=v[i];
	        
	    if(odd.size()==0)
	        cout<<0<<'\n';
	    else 
	    {
	        ll oddr = ceil ( (odd.size()-1)/2.0 );
	        for(int i=0; i<oddr; i++)
	            ans-=odd[i];
	        cout<<ans<<'\n';
	    }
	}

}
