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
    string s;
    ll n;
    cin >> s >> n;
    ll res = 0;
    for(int i = 0;i < s.size();i++)
    {
        ll ans = s[i] - '0';
        res += ans;
    }
    if(res % n == 0)
    {
        cout << s << nl;
        return;
    }
    else
    {
        ll k;
        ll d = stoi(s);
        if(d > n)
        {
            ll cn = 0;
            if(res > 9)
            {
                string p = to_string(res);
                for(int i = 0;i < p.size();i++)
                {
                    k = p[i] - '0';
                    cn += k;
                }
                cout << d + (n - cn) << nl;
            }
            else
            cout << d + (n - res) << nl;
        }
        else
        {
            ll a = n - d;
            if(a >= 6 && a == 9)
            {
                cout << n + a << nl;
                
            }
            else
            cout << d + a << nl;
        }
    }


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