#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,c ;
	    cin>>n>>c;
	    vector <ll> v(n);
	    for(auto& it : v)
	        cin>>it;
	    
	    sort(v.begin(), v.end());
	    
	    ll coins = 0;
	    
	    ll index = n-1, flag=0;
	    for(int i=0; i<n; i++)
	        {
	            if(v[i]<=c)
	            {
	                index = i;   
	                flag=1;
	            }
	        }
	    
	    if(flag==1)
	    {
	        v.erase(v.begin()+index); 
	    }
	    ll multiplier = 2;
	    for(int i=index-1; i>=0; i--)
	    {
	        if(v[i]*multiplier <= c)
	        {
	            multiplier *= 2;
	            v.erase(v.begin()+i);
	        }
	    }
	   coins += v.size();
	   
	   cout<<coins<<endl; 
	}
    return 0;
}
