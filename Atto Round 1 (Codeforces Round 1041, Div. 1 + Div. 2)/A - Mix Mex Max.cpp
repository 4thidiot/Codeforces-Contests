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
	    vector <int> v(n);
	    for(auto& it : v)
	        cin>>it;
	   
	    ll flag = 0;
	    set <int> v1;
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]==0)
	            flag=1;
	        if(v[i]!=0 && v[i]!=-1)
	            v1.insert(v[i]);
	    }
	    
	    if(flag==1)
	        cout<<"NO\n";
	    else if(v1.size()==0 || v1.size()==1)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";

	}
    return 0;
}
