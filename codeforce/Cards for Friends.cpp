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
    int w , h, n;
    cin >> w >> h >> n;
    int res = 1;
    while(w%2 == 0)
    {
        w = w/2;
        res = res * 2;
    }
    while(h%2 == 0)
    {
        h = h/2;
        res = res * 2;
    }
    if(res>=n)
    yes();
    else
    no();
    

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
