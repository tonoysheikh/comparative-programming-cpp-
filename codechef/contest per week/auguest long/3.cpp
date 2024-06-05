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



void solve()
{
    ll n , k , l;
    cin >> n >> k >> l;

    vector<ll>v;
    lpz(i,0,n)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    ll sum = 0;
    ll p = l - 1;
    sort(v.rbegin(),v.rend());
    lpz(i,0,n)
    {
        if(i == p)
        {
            sum += v[i];
            p += k;
        }

    }
    cout << sum << nl;



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