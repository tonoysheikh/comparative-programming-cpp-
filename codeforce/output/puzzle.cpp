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
    int n ,  m;
    cin >> n >> m;

    vector<int>v;
    for(int i = 0; i < m;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    vector<int>vv;
    for(int i = 0;i < n;i++)
    {

        vv.pb(v[i]);
    }
    int mx = *max_element(vv.begin() , vv.end());
    int mn = *min_element(vv.begin() , vv.end());

    cout << mx - mn << nl;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();

    return 0;
}