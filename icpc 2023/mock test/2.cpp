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


ll c = 1;
void solve()
{

    ll len;
    cin >> len;
    ll a , b;
    cin >> a >> b;
    vector<ll>v;
    for(int i = 0; i < len;i++)
    {
        ll x;
        cin >> x;
        if(x <= b)
        v.pb(x);
    }
    ll cnt = 0;
    ll sum;
    for(int i = 0;i < v.size();i++)
    {
       sum =  b-v[i];
       
        
    }
    

    cout << "Case " << c++ << ": " << cnt << nl;

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