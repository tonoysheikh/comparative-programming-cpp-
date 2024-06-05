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
    ll len, d;
        cin >> len >> d;
        vector<ll> v = {0,d};
        
        vector<ll>vv;
        
        for (int i = 0; i < len; ++i) {
            ll x;
            cin >> x;
            v.pb(x);
            ll mx = 0 ;
            sort(v.begin() , v.end());
            for(int i = 1;i < v.size();i++)
            {
                ll ans = abs(v[i] - v[i-1]);
                mx = max(ans , mx);
            }
            vv.pb(mx);   
        }

        for(int i = 0;i < vv.size();i++)
        {
            cout << vv[i] << " ";
        }

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