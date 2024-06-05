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
    ll len;
    cin >> len;
    ll sum = 0;
    for(ll i = 0;i < len;i++)
    {
        ll x;
        cin >> x;
        sum += x;
    }
    cout << sum << nl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();

    return 0;
}
