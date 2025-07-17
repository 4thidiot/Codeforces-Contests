#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, k;
	    cin>>n>>k;
	    vector <ll> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	        
	    ll start = v[k-1];
	    
	    sort(v.begin(), v.end());
    
    
        auto it = unique(v.begin(), v.end());
    
    
        v.erase(it, v.end());;
	        
	    ll index = 0;
	    for(auto it : v)
	    {
	        if(it==start)
	            break;
	        index++;     
	    }
	    
	    bool ans = true;
	    ll current = start, condition = 0;
	    
	    
	    for(int i = index; i < v.size()-1; i++)
	    {
	        condition += v[i+1] - v[i];
	        if( current >= condition )
	            current = v[i+1];
	            
	        else 
	        {
	            ans = false;
	            break;
	        }     
	    }
	    
	    if(ans)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
    return 0;
}
