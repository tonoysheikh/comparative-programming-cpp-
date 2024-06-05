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
    ll result = 0;
    for(ll i = 0;i < len;i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
        result += x;
    }

    ll k = result/len;// 4

    ll cnt = 0;

    for(ll i = 0;i < v.size() - 1;i++)
    {
        ll sum = 0;
        for(ll j = i+ 1;j < v.size();j++)
        {
            ll res;
            sum = result - (v[i] + v[j]);
            if(sum % (len-2) == 0)
                res = sum/(len - 2);
            else
                res = -1 ;

            //cout << res << nl;
            if(res == k)
            {
                cnt++;
            }
        }
    }
    cout << cnt << nl;
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