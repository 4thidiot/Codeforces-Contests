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
	    for(auto &it : v)
	        cin>>it;
	    
	    sort(v.begin(), v.end());
	    
	    ll ans1 = 0, ans2 = 0;
	    for(int i=0; i<n; i++)
	    {
	        if(i%2 == 1)
	            ans1+=v[i];
	    }
	    if(n%2==1)
	        ans1+=v[n-1];
	        
	    for(int i=n-1; i>=0; i-=2)
	    {
	        ans2+=v[i];
	    }
	       
	    cout<<min(ans1, ans2)<<'\n';
	}
    return 0;
}
