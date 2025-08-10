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
        
        if(n==2)
            cout<<-1<<" "<<2<<endl;
        else
        {
            for(ll i=0; i<n-1; i++)
            {
                if(i%2==0)
                    cout<<-1<<" ";
                else
                    cout<<3<<" ";
            }
            if(n%2==0)
                cout<<2<<" ";
            else
                cout<<-1<<" ";
            cout<<'\n';
        }
    }
    return 0;
}
