Div4 contest codeforces

A)#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	   string a;
	   cin>>a;
	   int length;
	   length = a.length();
	   for(int i=0; i<length-2; i++)
	        cout<<a[i];
	   cout<<"i"<<endl;   
	   
	   
	   
	   
	   
	   // char A[10];
	   // int j=0;
	   // for(int i=0; i<10; i++)
	   // {
	   //     cin>>A[i];
	   //     j++;
	   // }
	   // for(int i=0; i<j-2; i++)
	   //     cout<<A[i];
	   // cout<<"i"<<endl;     
	    
	}
    return 0;
}


B)

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string meow;
	    cin>>meow;
	    int length;
	    length=meow.length();
	    
	    int pair=0;
	    
	    for(int i=0; i<length-1; i++)
	    {
	        if(meow[i]==meow[i+1])
	            pair=1;
	    }
	     
	    
	    if(pair==1) 
	        cout<<1<<endl;
	    else   
	        cout<<length<<endl;
	}

}


C) //wrong answer hai theek karlo baad mein

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
	    int arr[n], copy[n];
	    int j;
	     int count=0,flag=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	        copy[i]=arr[i];
	    }     
	    cin>>j; 
	    for(int i=0; i<n; i++)
	    {
	        int temp;
	        temp=arr[i];
	        arr[i]=j-arr[i];
	        copy[i]=j-copy[i];
	        sort(arr, arr+n);
	       
	        for(int i=0; i<n; i++)
	        {
	            if(copy[i]==arr[i])
	                  count+=1;  
	        }
            if(count==n)
                flag=1;
            arr[i]=temp;
            copy[i]=temp;
	    
	    }
	    
	    	        
	        if(flag==1)
	            cout<<"YES"<<endl;
	        else
	            cout<<"NO"<<endl;
	       
	       flag=0;     
	}
}


