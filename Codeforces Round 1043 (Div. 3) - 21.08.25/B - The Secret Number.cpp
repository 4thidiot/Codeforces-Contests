#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector<ll> v;
	    for(ll i=10; i<n; i*=10)
	    {
	        ll num = (1+i);
	        if( n%num == 0)
	            v.push_back(n/num);
	    }
	    if(v.size()==0)
	        cout<<0<<endl;
	    else
	    {
	        cout<<v.size()<<endl;
	        sort(v.begin(), v.end());
	        for(auto it : v)
	            cout<<it<<" ";
	        cout<<endl;
	    }
	}
    return 0;
}
