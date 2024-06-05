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
    ll len , k;
    cin >> len >> k;
    vector<ll>v;
    vector<ll>vv;
    for(int i = 0;i < len;i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    for(int i = 0;i < len;i++)
    {
        ll x;
        cin >> x;
        vv.pb(x);
    }
    sort(v.begin() , v.end());
    sort(vv.begin() , vv.end());

    for(auto it:vv)cout << it << " ";
    cout << nl;


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