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
    ll x , y , n;
    cin >> x >> y >> n;
    ll k = n;
    while(k % x != y)
    {
        n--;
        k = n;

    }
    cout << k << nl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
