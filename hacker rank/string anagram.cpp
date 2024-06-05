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
    vector<string>v;
    for(int i = 0; i < len;i++)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    int q;
    cin >> q;
    vector<string>vv;
    for(int i = 0; i < q;i++)
    {
        string p;
        cin >> p;
        vv.pb(p);
    }
    int cnt = 0;
    for(int i = 0;i < q;i++)
    {
        string temp = vv[i];
        sort(temp.begin(),temp.end());
        for(int j = 0;j < len;j++)
        {
            string te = v[j];
            sort(te.begin(),te.end());
            if(temp == te)
            {
                cnt++;
            }
            
        }
        cout << cnt << nl;
        cnt = 0;
    }


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();

    return 0;
}
