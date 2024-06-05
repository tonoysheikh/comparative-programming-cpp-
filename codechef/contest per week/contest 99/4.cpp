#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define pi 3.1415926535897932384626433832795

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve()
{
    ll len;
    cin >> len;
    vector<ll>v;
    vector<ll>vv;
    for(ll i =0;i < len;i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort(v.rbegin() , v.rend());
    
    ll sum = 0;
    for(ll i = 0;i < len;i++)
    {
        sum += v[i];
        vv.pb(sum);

    }
    reverse(vv.begin(),vv.end());
    for(ll i = 0;i < vv.size();i++)
    {
        cout << vv[i] << " ";
    }
    cout << nl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
