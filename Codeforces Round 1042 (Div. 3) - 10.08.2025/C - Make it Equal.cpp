#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll tc;
	cin>>tc;
	while(tc--)
	{
	    ll n, k;
	    cin>>n>>k;
	    
	    multiset <ll> a, T;
	    
	    for(int i=0; i<n; i++)
	    {
	        ll num; 
	        cin>>num;
	        num = min(k-(num%k), num%k);
	        a.insert(num);
	    }
	    for(int i=0; i<n; i++)
	    {
	        ll num; 
	        cin>>num;
	        num = min(k-(num%k), num%k);
	        T.insert(num);
	    }
	    
	    if(a == T)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}




//ANOTHER APPROACH

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() 
// {
// 	ll tc;
// 	cin>>tc;
// 	while(tc--)
// 	{
// 	    ll n, k;
// 	    cin>>n>>k;
	    
// 	    vector <ll> a, T;
	    
// 	    for(int i=0; i<n; i++)
// 	    {
// 	        ll num; 
// 	        cin>>num;
// 	        num = min(k-(num%k), num%k);
// 	        a.push_back(num);
// 	    }
// 	    for(int i=0; i<n; i++)
// 	    {
// 	        ll num; 
// 	        cin>>num;
// 	        num = min(k-(num%k), num%k);
// 	        T.push_back(num);
// 	    }
	    
// 	    ll flag = 0;
// 	    sort(a.begin(), a.end());
// 	    sort(T.begin(), T.end());
// 	    for(int i=0; i<n; i++)
// 	    {
// 	        if(a[i]!=T[i])
// 	            flag=1;
// 	    }
	    
// 	    if(flag==1)
// 	        cout<<"NO\n";
// 	    else
// 	        cout<<"YES\n";
// 	}
// 	return 0;
// }
