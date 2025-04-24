//q-1 - accepted
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
	    string s;
	    cin>>s;
	    
	    int count0=0, count1=0;
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]=='0')
	            count0++;
	        else
	            count1++;
	    }
	    
	    cout<<((count1+1)*count0) + ((count1-1)*count1)<<endl;
	        
	}
    return 0;
}

//q-2 - accepted
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
    	int n, x;
    	cin>>n>>x;
	
    	int flag=0;
    	for(int i=0; i<n; i++)
	    {
	        if(i==x)
	        {
	            cout<<n-1<<" ";
	            flag=1;
	            continue;
	        }
	        
	        if(flag==1 && i==n-1)
	        {
	            cout<<x;
	            break;
	        }
	        cout<<i<<" ";
    	}
	    cout<<endl;
	}
	
    return 0;
}

//q-3 - accepted
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
	    
	    vector <int> a(n), b(n);
	    for(int i=0; i<n; i++)
	        cin>>a[i];
	    for(int i=0 ;i<n; i++)
	        cin>>b[i];
	    
	    int sum=0;;     
	    for(int i=0; i<n; i++)
	    {
	        if(b[i]==-1)
	            continue;
	        else
	        {
	            sum=a[i]+b[i];
	            break;
	        }     
	    }
	    int new_sum=0, flag=0, count_minus1=0;
	    for(int i=0; i<n; i++)
	    {
	        if(b[i]==-1)
	        {
	            count_minus1++;
	            continue;
	        }     
	        else
	        {
	            new_sum=a[i]+b[i];
	            if(new_sum!=sum)
	            {
	                flag=1;
	                break;
	            }     
	        }         
	    }
	    if(flag!=1 && count_minus1!=n)
	    {
	        for(int i=0; i<n; i++)
	        {
	            if(sum-a[i]>k || sum-a[i]<0)
	                flag=1;
	        }
	    }
	    
	    if(flag==1)
	        cout<<0<<endl;
	    else if(count_minus1==n)
	        cout<<(k+(*min_element(a.begin(), a.end()))) - (*max_element(a.begin(), a.end())) + 1 << endl;
	    else
	        cout<<1<<endl;
	         
	    
	    
	} 

}


//q-4 - not completely solved yet
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, m;
	    cin>>n>>m;
	    vector <int> a, b;
	    for(int i=0; i<n; i++)
	    {
	        int here;
	        cin>>here;
	        a.push_back(here);
	    }     
	    for(int i=0; i<m; i++)
	     {
	        int here;
	        cin>>here;
	        b.push_back(here);
	    }   
	    
	    int counter=0, flag=0, k=0;
	    for(int i=0; i<n; i++)
	    {
	        int maxb = *max_element(b.begin(), b.end());
	        int maxa = *max_element(a.begin(), a.end());
	        
	        if(maxa>=maxb)
	        {
	            for(int i=a.size()-1; i>=0; i--)
	            {
	                if(a[i]==maxa)
	                {
	                    a.erase(a.begin() + i);
	                    break;
	                }     
	            }
	            for(int i=b.size()-1; i>=0; i--)
	            {
	                if(b[i]==maxb)
	                {
	                    b.erase(b.begin() + i);
	                    break;
	                }     
	            }
	        }
	        else if(counter<2)
	        {
	            k=maxb;
	            counter++;
	        }
	        if(counter>1)
	            flag=1;
	        
	    }
	    
	    if(flag==1)
	        cout<<-1<<endl;
	    else if(counter==0)
	        cout<<0<<endl;
	    else
	        cout<<k<<endl;
	}

}

