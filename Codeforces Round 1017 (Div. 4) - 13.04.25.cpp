// solution -1 -- worked
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string abbr;
	    for(int i=0; i<3; i++)
	    {
	        string s;
	        cin>>s;
	        
	        abbr+=s[0];
	    }
	    cout<<abbr<<endl;
	}
    return 0;
}

//solution - 2 -- failed test 2

#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, m, l, r;
	    cin>>n>>m>>l>>r;
	    
	    cout<<l<<" "<<r-(n-m)<<endl;
	}
    return 0;
}

//solution - 3 -- worked -- later failed test 2

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
	    int arr[n][n];
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<n; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    
	    //cout<<arr[0][1]-arr[0][0]<<" ";
	    
	    vector <int> v, copy;
	    v.push_back(0);
	    //copy.push_back(INT_MAX);
	    
	    for(int i=0; i<n; i++)
	    {
	        v.push_back(arr[i][0]);
	        copy.push_back(arr[i][0]);
	    }     
	        
	    for(int j=1; j<n; j++)
	    {
	        v.push_back(arr[n-1][j]);
	        copy.push_back(arr[n-1][j]);
	    }
	    
	    sort(copy.begin(), copy.end());
	    
	    for(int i = 0; i < 2*n; i++)
	    {
            if(copy[i] != (i+1))
            {
                v[0] = i+1;
                break;
            }
	    }    
            
        for(auto it: v)
            cout<<it<<" ";
            
        cout<<endl;    
	}

}

//solution - 4 -- failed test 2

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string p;
	    cin>>p;
	    string s;
	    cin>>s;
	    
	    vector <int> p1;
	    int count=0;
	    for(int i=0; i<p.size(); i++)
	    {
	        if(p[i]==p[i+1])
	        {
	            count++;
	        }
	        else
	        {
	            count++;
	            p1.push_back(count);
	            count=0;
	        }
	    }
	    

	    
	    vector <int> s1;
	    count=0;
	    for(int i=0; i<s.size(); i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            count++;
	        }     
	        else
	        {
	            count++;
	            s1.push_back(count);
	            count=0;
	        }
	    }
	    
	    
	    if(s==p)
	        cout<<"YES"<<endl;
	    else if( (p=="L" && (s=="L"||s=="LL")) || (p=="R" && (s=="R"||s=="RR")) )
	        cout<<"YES"<<endl;
	    else if(p1.size() != s1.size())
	        cout<<"NO"<<endl;
	    else
	    {
	        int flag=0;
	        for(int i=0; i<p1.size(); i++)
	        {
	            if( (s1[i] - p1[i] > 1) || (s1[i] - p1[i] < 0) )
	            {
	                cout<<"NO"<<endl;
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	            cout<<"YES"<<endl;	        
	    }
	    
	}

}


        UPSOLVING


//fixed solution 4 - still unfixed for ll rr kind of cases

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string p;
	    cin>>p;
	    string s;
	    cin>>s;
	    
	    vector <int> p1;
	    int count=0;
	    for(int i=0; i<p.size(); i++)
	    {
	        if(p[i]==p[i+1])
	        {
	            count++;
	        }
	        else
	        {
	            count++;
	            p1.push_back(count);
	            count=0;
	        }
	    }
	    

	    
	    vector <int> s1;
	    count=0;
	    for(int i=0; i<s.size(); i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            count++;
	        }     
	        else
	        {
	            count++;
	            s1.push_back(count);
	            count=0;
	        }
	    }
	    
	    
	    if(s==p)
	        cout<<"YES"<<endl;
	    else if( (p=="L" && (s=="L"||s=="LL")) || (p=="R" && (s=="R"||s=="RR")) )
	        cout<<"YES"<<endl;
	    else if(p1.size() != s1.size())
	        cout<<"NO"<<endl;
	    else
	    {
	        int flag=0;
	        for(int i=0; i<p1.size(); i++)
	        {
	            if( (s1[i] > 2*p1[i]) || (s1[i] - p1[i] < 0) )
	            {
	                cout<<"NO"<<endl;
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	            cout<<"YES"<<endl;	        
	    }
	    
	}

}

//Q-3)
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    long long arr[n][n];
	    
	    for(int i=0; i<n; i++)
	    {
	        for(int j=0; j<n; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    
	    vector <long long> v;
	    v.push_back(0);
	    
	    for(int i=0; i<n; i++)
	        v.push_back(arr[i][0]);
	    for(int j=1; j<n; j++)
	        v.push_back(arr[n-1][j]);
	        
	    long long actual_sum = (2*n)*(2*n+1)/2;
	    long long present_sum = accumulate(v.begin(), v.end(), 0);
	    
	    v[0] = actual_sum - present_sum;
        
        for(auto it : v)
            cout<<it<<" ";
        
        cout<<endl;
	}
	return 0;
}

//q-2)
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n, m, l, r;
	    cin>>n>>m>>l>>r;
	    
	    if(abs(l) >= (n-m))
	        cout<<l+(n-m)<<" "<<r<<endl;
	    else
	        cout<<0<<" "<<r-((n-m)+l)<<endl;
	}
    return 0;
}
//q-4 - better implementation
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, t;
    cin>>s>>t;
    vector <int> v1, v2;
    
    if(s[0]!=t[0])
    {
        cout<<"NO"<<endl;
        return;
    }
    
    s = '.' + s; //starting mein ek . daal diya
    t = '.' + t; //starting mein ek . daal diya
    
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==s[i-1])
            v1.back()++;
        else
            v1.push_back(1);
    }
    
    for(int i=1; i<t.size(); i++)   
    {
        if(t[i]==t[i-1])
            v2.back()++;
        else
            v2.push_back(1);
    }
    
    if(v1.size() != v2.size())
    {
        cout<<"NO"<<endl;
        return;
    }
    
    for(int i=0; i<v1.size(); i++)
    {
        if(v2[i]<v1[i] || v2[i]>2*v1[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;    
}



int main() 
{
	int t;
	cin>>t;
	while(t--)
	    solve();
    
    return 0;
}
//q-4 ka mera fixed code version

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string p;
	    cin>>p;
	    string s;
	    cin>>s;
	    
	    vector <int> p1;
	    int count=0;
	    for(int i=0; i<p.size(); i++)
	    {
	        if(p[i]==p[i+1])
	        {
	            count++;
	        }
	        else
	        {
	            count++;
	            p1.push_back(count);
	            count=0;
	        }
	    }
	    

	    
	    vector <int> s1;
	    count=0;
	    for(int i=0; i<s.size(); i++)
	    {
	        if(s[i]==s[i+1])
	        {
	            count++;
	        }     
	        else
	        {
	            count++;
	            s1.push_back(count);
	            count=0;
	        }
	    }
	    
	    
	    if(s==p)
	        cout<<"YES"<<endl;
	    else if( s[0]!=p[0] ) //missed this case
	        cout<<"NO"<<endl;
	    else if( (p=="L" && (s=="L"||s=="LL")) || (p=="R" && (s=="R"||s=="RR")) )
	        cout<<"YES"<<endl;     
	    else if( (p=="L") || (p=="R") )
	        cout<<"NO"<<endl;     
	    else if(p1.size() != s1.size())
	        cout<<"NO"<<endl;
	    else
	    {
	        int flag=0;
	        for(int i=0; i<p1.size(); i++)
	        {
	            if( (s1[i] > 2*p1[i]) || (s1[i] - p1[i] < 0) )
	            {
	                cout<<"NO"<<endl;
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	            cout<<"YES"<<endl;	        
	    }
	    
	}

}

