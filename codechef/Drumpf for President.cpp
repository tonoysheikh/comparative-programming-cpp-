#include<bits/stdc++.h>
using namespace std;
void solve()
{
     int n,k;
	    cin>>n>>k;
	    int a;
	    unordered_map<int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        if(i+1==a)
	        {
	            m[a]=-n;
	        }
	        m[a]++;
	    }
	    int count=0;
	    for(auto &val:m)
	    {
	        if(val.second>=k)
	        {
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}