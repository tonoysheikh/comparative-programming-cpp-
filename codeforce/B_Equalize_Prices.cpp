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
    int len , k;
    cin >> len >> k;
    vector<int>v;
    for(int i =0;i < len;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    int mx = *max_element(v.begin() , v.end());
    int mn = *min_element(v.begin() , v.end());
    int a = mn + k;
    int b = mx - a;
    if(b >  k)
        cout << -1 << nl;
    else
        cout << mn + k << nl;


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