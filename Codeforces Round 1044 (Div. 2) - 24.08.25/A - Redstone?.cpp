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
	    
	    ll flag = 0;
	    for(int i=0; i<n-1; i++)
	    {
	        if(v[i]==v[i+1])
	        {
	            flag=1;
	            break;
	        }
	    }
	    
	    if(flag==1)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
    return 0;
}
