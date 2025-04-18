Div -3 - 25/02/25

[PROBLEM A]

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, p;
    cin>>n>>k>>p;
    
    if(abs(k)%abs(p)==0)
    {
        if(abs(k)/abs(p)>n)
            cout<<-1<<endl;
        else
            cout<<abs(k)/abs(p)<<endl;
    }
    else
    {
         if((abs(k)/abs(p))+1>n)
            cout<<-1<<endl;
        else
            cout<<((abs(k)/abs(p))+1)<<endl;
    }
    
}





int main() 
{
	int t;
	cin>>t;
	while(t--)
	    solve();
    
    return 0;
}


[PROBLEM B]


#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    long long count1=0;    //for -
    long long count2=0;    //for _
    for(int i=0; i<n; i++)
    {
        if(s[i]=='-')
            count1++;
        else
            count2++;
    }
    
    if(count1%2==0)
        cout<<(count1/2)*count2*(count1/2)<<endl;
    else
        cout<<(count1/2)*count2*((count1/2)+1)<<endl;
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	    solve();
    
    return 0;
}


[PROBLEM D]

//NOT WORKING PROPERLY

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    
    int q=0;
    for(int i=0; i<n-1; i++)   
    {
        if(v[i]>v[i+1])
        {
            cout<<i+1<<" ";
            q=i;
            break;
        }    
    }
    
    int ans=0;
    for(int j=q; j<n-1; j++)
    {
        for(int r=j+1; r<n; r++)
        {
            if(v[r]>v[j])
                ans=r;
        }
    }
    
    cout<<ans+1<<endl;
    
}


int main() 
{
	int t;
	cin>>t;
	while(t--)
	    solve();
    
    return 0;
}
