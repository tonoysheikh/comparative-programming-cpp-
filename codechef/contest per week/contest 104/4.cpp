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

    ll len;
    cin >> len;
    vector<ll>v;
    vector<pair<ll , ll>>vv;
    //ll res = 0;
    for(int i = 0; i < len;i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
        vv.pb({x , i});
    }
    sort(vv.rbegin() , vv.rend());
    ll mx = v[0];
    
    ll res = 0;

    for(int i = 0;i < vv[0].second;i++)
    {
        mx = max(mx , v[i]);
        v[i] = mx;
    }
    mx = v[len -1];
    for(int i = len - 1;i > vv[0].second;i--)
    {
        mx = max(mx , v[i]);
        v[i] = mx;
    }
    
    for(int i = 0; i < len;i++)
    {
        res += v[i];
    }
    cout << res <<  nl;

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