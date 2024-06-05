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
    ll x;
    cin >> x;
    
    while(1)
    {
        
        string s = to_string(x);
        vector<ll>v;
        for(int i = 0; i < s.size();i++)
        {
            v.pb(s[i] - '0');
        }
        ll sum = 0;
        for(int i = 0;i<v.size();i++)
        {
            sum += v[i];
        }
        
        ll res;
        res = __gcd(x, sum);
        
        if(res > 1)
        {
            cout << x << nl;
            break;
        }
        else
        {
            x++;
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