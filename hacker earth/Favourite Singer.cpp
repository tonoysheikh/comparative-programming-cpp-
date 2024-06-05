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
    map<ll , ll>mp;
    for(ll i = 0;i < len;i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    ll mx = 0;
    ll cnt = 0;
    for(auto i:mp)
    {
        if(mx <= i.second)
        {
            mx= i.second;
            cnt++;
        }
    }
    cout << cnt << nl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();
    


    return 0;
}
