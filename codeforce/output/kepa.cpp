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

    int len;
    cin >> len;
    vector<ll>v;
    for(int i = 0 ;i < len;i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    
    ll cnt = 1;
    ll mx = 1;
    for(int i = 0; i < v.size() - 1;i++)
    {
            if(v[i] > v[i+1])
            {
                cnt =  1;
            }
            else
            {
                cnt++;
                
                if(cnt > mx)
                {
                    mx = cnt;
                }
                
            }

        
    }
    cout << mx << nl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}