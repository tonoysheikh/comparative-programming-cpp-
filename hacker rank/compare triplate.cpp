#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define pi 3.1415926535897932384626433832795

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve()
{
    vector<int>v;
    vector<int>vv;
    for(int i = 0;i < 3;i++)
    {
        int c;
        cin >> c;
        v.pb(c);
    }
    for(int i = 0;i < 3;i++)
    {
        int d;
        cin >> d;
        vv.pb(d);
    }
    int a = 0, b = 0;
    for(int i = 0;i < 3;i++)
    {
        if(v[i] > vv[i])
        a++;
        else if(v[i] < vv[i])
        b++;
        else
        continue;
        
    }
    cout << a << " " << b << nl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();

    return 0;
}
