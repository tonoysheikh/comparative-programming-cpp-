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
    int s , t;
    cin >> s >> t;
    int a , b;
    cin >> a >> b;
    int m , n;
    cin >> m >> n;
    vector<int>v;
    vector<int>vv;
    for(int i = 0;i < m;i++)
    {
        int x;
        cin >> x;
        v.pb(a + x);
    }
    for(int i = 0;i < n;i++)
    {
        int y;
        cin >> y;
        vv.pb(b + y);
    }
    int cnt = 0;
    for(int i = 0;i < m;i++)
    {
        //cout << v[i] << nl;
        if(v[i] >= s && v[i] <= t)
        cnt++;
    }
    int cnt2 = 0;
    for(int i = 0;i < n;i++)
    {
        //cout << vv[i] << nl;
        if(vv[i] >= s && vv[i] <= t)
        {
            cnt2++;
        }
    }

    cout << cnt << nl << cnt2 << nl;
    

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();
    


    return 0;
}
