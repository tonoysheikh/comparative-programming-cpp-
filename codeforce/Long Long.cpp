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
    vector<int>v;
    ll sum = 0;
    for(ll i = 0;i < len;i++)
    {
        int x;
        cin >> x;
        sum += abs(x);
        v.pb(x);
    }
    ll cnt = 0;
    ll flag = 0;
    for(ll i = 0;i < len;i++)
    {
        
        if(flag % 2 == 0)
        {
            if(v[i] < 0)
            {
                flag = 1;
                cnt++;
            }
            else if(v[i] == 0)
            {
                continue;
            }
            else if(v[i] > 0)
            {
                flag = 0;
            }

        }
        if(v[i] > 0)
        {
            flag = 0;
        }
    }
    cout << sum << " " << cnt << nl;

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
