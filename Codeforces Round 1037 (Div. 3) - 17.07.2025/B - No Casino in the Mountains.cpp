#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    vector <int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	        
	        
	    int count_0 = 0, ans = 0;
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]==0)
	            count_0++;         
	        
	        if(count_0==k)
	        {
	            ans++;
	            count_0 = 0;
	            i++;
	        }
	        
	        if(v[i]!=0)
	            count_0 = 0;
	    }
	    cout<<ans<<endl;
	}
    return 0;
}
