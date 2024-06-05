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
    int n , m , k , h;
    cin >> n >> m >> k >> h;
    vector<int>v;
    for(int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    vector<int>nv;
    int cnt = 0;
    for(int i = 0; i < n;i++)
    {
        nv.pb(abs(h - v[i]));
        if(nv[i] % k == 0 && nv[i] != 0 && nv[i] <= k * (m - 1))
        cnt++;

    }
    cout << cnt << nl;

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
