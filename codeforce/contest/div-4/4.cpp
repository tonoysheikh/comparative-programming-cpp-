#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define pi 3.1415926535897932384626433832795

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve()
{
    ll len , dif;
    cin >> len >> dif;
    
    vector<ll>v;

    for(ll i = 0;i < len;i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());

    ll res = 0;
    int i = 0;
    while(i < len)
    {
        int k = i + 1;
        while(k < len)
        {
            if(v[k] - v[k - 1] > dif)
            break;
            k++;
        }
        
        ll p = k - i;
        res = max(res , p);
        i = k;
        
        
    }
    cout << len - res << nl;
    

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
