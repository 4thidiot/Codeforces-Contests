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
        vector <ll> v(n);
        for(auto& it : v)
            cin>>it;
            
        for(int i=0; i<n; i++)
            cout<<n+1-v[i]<<" ";
        cout<<'\n';
    }
    return 0;
}
