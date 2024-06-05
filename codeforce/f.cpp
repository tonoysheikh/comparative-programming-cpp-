#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n' 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
#define lpz(i, a, b) for (int i=a; i<b; i++)
#define lp(i, a, b) for (int i=a; i<=b; i++)
#define test() int t; cin>>t; while(t--)
#define ull unsigned long long



void solve()
{

    int len;
    cin >> len;
    vector<int>v;

    for(int i = 0;i < len;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    vector<pair<int,int>>vv;
    
    for(int i =  0;i < v.size();)
    {
        int temp = 0 , p = i;
       for(int j = i;j < v.size();j++)
       {
          temp ^= v[j];
          if(temp == 0)
          {
             p = j;
          }
       }
       vv.pb({i,p});
       i = p + 1;
    }
    cout << vv.size() << nl;

    for(auto [ans1,ans2]:vv)
    {
        cout << ans1 + 1 << " " << ans2 + 1 << nl;
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    test(){
    solve();
    }
    //solve();

    return 0;
}