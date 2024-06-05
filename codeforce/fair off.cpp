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

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve()
{
    vector<int>v;
    vector<int>vv;
    lpz(i,0,4)
    {
        int x;
        cin >> x;
        v.pb(x);
        vv.pb(x);
    }
    sort(v.begin() , v.end());
    int a = v[2];
    int b = v[3];
    int c = max(vv[0] , vv[1]);
    int d = max(vv[2] , vv[3]);

    if((c == a || c == b) && (d == a || d == b) )
    {
        yes();
    }
    else
    {
        no();
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
