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
   int n , m;
   cin >> n >> m;
   vector<int>v;
   int sum = 0;
   for(int i = 0; i < m;i++)
   {
        int x;
        cin >> x;
        v.pb(x);
        sum += n - x;
   }
   int d = 0;
   int r = n - sum;
   int res = max(d , r);
   cout << res << nl;

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
