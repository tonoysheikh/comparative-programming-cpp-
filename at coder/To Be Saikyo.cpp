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
    int len;
    cin >> len;
    vector<int>v;
    int m = 0;
    for(int i = 0; i < len;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    for(int i = 1; i < len;i++)
    {
        m = max(v[i] , m);
    }
    if(v[0] > m)
    cout << 0 << nl;
    else if(v[0] == m)
    {
        cout << 1 << nl;
    }
    else
    {
        cout << m - v[0] + 1<< nl;
    }
    

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
        solve();
    


    return 0;
}
