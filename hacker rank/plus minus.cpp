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
    int pos = 0, ze =0,ne =0;
    for(ll i = 0;i < len;i++)
    {
        ll x;
        cin >> x;
        if(x > 0)
        pos++;
        else if(x==0)
        ze++;
        else
        ne++;
    }
    cout << fixed << setprecision(6) << (double)pos/len << nl;
    cout << fixed << setprecision(6) << (double)ne/len << nl;
    cout << fixed << setprecision(6) << (double)ze/len << nl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();

    return 0;
}
