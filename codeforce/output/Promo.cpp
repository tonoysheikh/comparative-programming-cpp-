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

    int len , q;
    cin >> len >> q;
    vector<ll>v;
    for(int i = 0; i < len;i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort(v.rbegin() , v.rend());
    vector<ll>pre;
    ll res = 0;
    for(int i = 0; i < v.size();i++)
    {
        res += v[i];
        pre.pb(res);
    }
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if(x == y)cout << pre[x -1] << nl;
        else
        {
            ll ans=pre[x - 1]-pre[x-y - 1];
            cout<<ans<<endl;
        }
        
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}