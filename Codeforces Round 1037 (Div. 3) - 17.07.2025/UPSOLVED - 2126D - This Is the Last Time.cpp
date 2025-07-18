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
	    vector <pair<pair<int, int>, int>> v(n);
	    for(auto &[left_right, real] : v)  //real and actual same baat hai
	        cin>>left_right.first>>left_right.second>>real;
	    
	    sort(v.begin(), v.end()); //sorting done based on first int matlab left automatically
	    
	    int ans = k;
	    for(auto &[left_right, real] : v)
	    {
	        int l = left_right.first, r = left_right.second;
	        if(l<=ans && ans<=r)
	            ans = max(ans, real);
	    }
	    
	    cout<<ans<<'\n'; //Even "/n" works!
	}
    return 0;
}
