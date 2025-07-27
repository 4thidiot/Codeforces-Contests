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
	    
	    ll flag = 0, mini = INT_MAX;
	    for(int i=0; i<n-1; i++)
	    {
	        mini = min(mini, v[i]);
	        if(v[i+1]%2==1)
	        {
	            
	            if( floor(v[i+1]/2.0) > mini || ceil(v[i+1]/2.0) > mini)
	            {
	                flag=1;
	                break;
	            }
	        }
	        else
	        {
	            if( (v[i+1]/2) >= mini )
	                {
	                    flag=1;
	                    break;
	                }
	        }
	    }
	    
	    if(flag==1)
	        cout<<"NO\n";
	    else
	        cout<<"YES\n";
	    
	}
    return 0;
}
