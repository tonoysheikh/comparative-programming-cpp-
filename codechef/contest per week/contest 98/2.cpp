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
    bool res = false;
    int x , y , z;
    cin >> x >> y >> z;
    int a , b;
    if(x * y % z == 0)
    {
        b = z;
        a = x * y;
    }
    else if( x * z % y == 0)
    {
        b = y;
        a = x*z;
    }
    else if(y * z % x == 0)
    {
        b = x;
        a = y * z;
    }
    else
    {
        res = true;
        
    }
    if(res)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << a << " " << b << nl;
    }

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
