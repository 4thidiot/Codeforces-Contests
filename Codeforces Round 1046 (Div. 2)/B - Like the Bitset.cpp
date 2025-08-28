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
	    string s;
	    cin>>s;
	    
	    vector <int> v(n, 0);
	   // for(int i=0; i<s.size(); i++)
    // 	    v[i]=i+1;
    	
    	ll maxi = INT_MIN, count1=0, flag=0, ind=0;
    	for(int i=0; i<n; i++)
    	{
    	    if(flag==0 && s[i]=='1')
    	    {
    	        ind=i;    
    	        flag=1;
    	    }
    	    if(s[i]=='1')
    	        count1++;
    	    else
    	        count1=0;
    	   
            maxi = max(maxi, count1);
    	}
    	if(maxi>=k)
    	    cout<<"NO\n";
    	else
        {   
            cout<<"YES\n";
            ll count = 1;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    v[i] = count;
                    count++;
                }
            }
            for(int i=0; i<n; i++)
            {
                if(v[i]==0)
                {
                    v[i]=count;
                    count++;
                }
            }
            for(auto it : v)    
                cout<<it<<" ";
            cout<<'\n';
        }
	    
	}
    return 0;
}
