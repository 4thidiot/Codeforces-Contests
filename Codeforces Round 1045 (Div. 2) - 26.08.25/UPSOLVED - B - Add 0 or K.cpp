#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() 
{
	ll n, k;
	cin>>n>>k;
	vector <ll> v(n);
	for(auto &it : v)
	    cin>>it;
	    
	for(int i=0; i<n; i++)
	{
	    ll x = v[i] % (k+1);
	    v[i] += x*k;
	}
	
	for(auto it : v)
	    cout<<it<<" ";
	cout<<'\n';

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();
}
