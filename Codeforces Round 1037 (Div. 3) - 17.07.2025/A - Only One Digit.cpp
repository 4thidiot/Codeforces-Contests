#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    
	    int mini = INT_MAX;
	    while(x>0)
	    {
	        int d = x%10;
	        mini = min(mini, d);
	        x/=10;
	    }
	    cout<<mini<<endl;
	}
    return 0;
}
