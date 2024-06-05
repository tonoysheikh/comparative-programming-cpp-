#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
const int N=110;
int a[N];
int t,n;
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		cin>>n;
		int i,j;
		int l=0,r=0;
		for(i=1; i<=n; i++)
		{
			cin>>a[i];
			if(a[i]==1)
			{
				l++;
			}
			if(a[i]==2)
			{
				r++;
			}
		}
		if(r%2==0)
		{
			if(l%2==0)
			     printf("YES\n");
			else
			    printf("NO\n");
		}
		else
		{
			if(l<2)
			    printf("NO\n");
			else
			{
				if(l%2==0)
				    printf("YES\n");
				else
				    printf("NO\n");
			}
		} 
	}
	return 0;
}
 