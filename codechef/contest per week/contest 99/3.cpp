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
    int len;
    cin >> len;
    map<int,int>mp;
    int cnt =0;
    int mx = 0;
    for(int i = 0;i < len;i++)
    {
        int x;
        cin >> x;
        mp[x]++;

        if(mp[x] % 2 != 0)
        {
            cnt++;
            if(mx <cnt)
            {
                mx = cnt;
            }
        }
        else
        {
            cnt--;
            

        }
    }
    cout << mx << nl;

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
