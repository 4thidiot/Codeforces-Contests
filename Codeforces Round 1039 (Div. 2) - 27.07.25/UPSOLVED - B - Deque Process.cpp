#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n; 
	    cin>>n;
	    vector <int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    
	    string ans;
        int l = 0, r = n-1;
        
	    for(int turn=1; turn<=n; turn++)
	    {
	        bool takeleft;
	        if(turn%2==1)
	            takeleft = v[l]<v[r];
	        else
	            takeleft = v[r]<v[l];
	            
	        if(takeleft)
	        {
	            ans.push_back('L');
	            l++;
	        }
	        else
	        {
	            ans.push_back('R');
	            r--;
	        }
	    }
	        cout<<ans<<'\n';
	}
    return 0;
}
