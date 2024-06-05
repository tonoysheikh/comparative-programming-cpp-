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
    ll a , b;
    cin >> a >> b;
    ll m = max(a , b);
    vector<ll>v;
    int mn = INT_MAX;
    ll res;
    ll ind; 
    for(int i = 0; i * i <= m;i++)
    {
        ll f = (i ^ a);
        ll s = (i ^ b);

        res = abs(f-s);
        if(res < mn)
        {
            mn = res;
            ind = i;
        }
    }
    //cout << mn << nl;
    cout << ind << nl;


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