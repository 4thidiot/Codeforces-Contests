#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, r, b;
	    cin>>n>>r>>b;
	    
	    if( (r==n) && (b%2!=n%2) )
	        cout<<"NO\n";
	    else if ( (b%2!=n%2) && ( (n-b)%2==1 ) )
	        cout<<"NO\n";
	    else if (r>b && r%2!=n%2)
	        cout<<"NO\n";
	    else
	        cout<<"YES\n";
	}
    return 0;
}
