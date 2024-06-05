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
    vector<ll>v;
   
    for(ll i =0 ;i < len ;i++)
    {
        ll a , b;
        cin >> a >> b;
        v.pb(a);
        v.pb(b);
    }
    ll mn1 ;
    ll res1 = INT_MAX;
    ll res2 = INT_MAX;
     for(ll i = 0 ;i < v.size() - 2 ;i+= 2)
    {
        
        
            if(abs(v[i] - v[i + 2]) < res1)
            {
                res1 = abs(v[i] - v[i + 2]);
            }
            if(abs(v[i] - v[i + 3]) < res2)
            {
                res2 = abs(v[i] - v[i + 3]);
            }
             
            mn1 = min(res1 , res2);  
        
        
    }
    ll mn2;
    ll res3 = INT_MAX;
    ll res4 = INT_MAX;
      for(ll i = 1 ;i < v.size() - 2 ;i+= 2)
    {
        
            if(abs(v[i] - v[i + 1]) < res3)
            {
                res3 = abs(v[i] - v[i + 1]);
            }
            if(abs(v[i] - v[i + 2]) < res4)
            {
                res4 = abs(v[i] - v[i + 2]);
            }
            mn2 = min(res3 , res4);          
    }
    cout << min(mn1 , mn2) << nl;
    

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
