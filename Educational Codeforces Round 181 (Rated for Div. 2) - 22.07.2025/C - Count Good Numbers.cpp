#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll l, r;
	    cin>>l>>r;
	    
	    ll ans1 = r - r/2 - r/3 - r/5 - r/7 + r/6 + r/10 + r/14 + r/35 + r/15 + r/21 - r/30 - r/105 - r/42 - r/70 + r/210;
	    
	    ll r1 = l-1;
	    ll ans2 = r1 - r1/2 - r1/3 - r1/5 - r1/7 + r1/6 + r1/10 + r1/14 + r1/35 + r1/15 + r1/21 - r1/30 - r1/105 - r1/42 - r1/70 + r1/210;
	    
	    ll ans = ans1-ans2;
	    cout<<ans<<endl;
	}

}
