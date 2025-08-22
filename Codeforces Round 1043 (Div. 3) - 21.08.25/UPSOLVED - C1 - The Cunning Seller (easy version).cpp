// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// ll cost (ll num)
// {
//     return ( pow(3, (num+1)) + num*(pow(3, num-1)) );
// }

// int main() 
// {
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    ll k;
// 	    cin>>k;
	    
// 	    ll x = log(k)/log(3);
// 	    ll numbe = pow(3, x);
// 	    ll rem = k - numbe;
	    
// 	    ll ans;
	    
// 	    ll one_watermelon = 3;
// 	    ll three_watermelon = 10;
// 	    ans = cost(x);
// 	    ans += (rem/numbe)*cost(x);
// 	    rem -= (rem/numbe*1.0)*numbe;
// 	    ans += (rem/10)*three_watermelon;
// 	    ans+= (rem - rem/10)*one_watermelon;
	    
	    
// 	    cout<<ans<<'\n';
// 	}
//     return 0;
// } - WRONG DURING CONTEST

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	vector <ll> cost;
	ll c = 3;
	ll cnt = 1;
	for(int i=0; i<20; i++)
	{
	    cost.push_back(c);
	    c = 3*c + cnt;
	    cnt *= 3;
	}
	
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll min_cost = 0;
	    ll sz = 0;
	    while(n)
	    {
	        min_cost += (n%3)*cost[sz];
	        n /= 3;
	        sz++;
	    }
	    cout<<min_cost<<'\n';
	}
    return 0;
}

