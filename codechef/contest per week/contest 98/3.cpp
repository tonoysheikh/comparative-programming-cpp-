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
    vector<int>v;
    vector<int>v1;
    map<int , int>mp;
    for(int i = 0;i < len;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
        mp[x]++;
    }
   
    
    for(int i = 0;i < len;i++)
    {
        int y;
        cin >> y;
        v1.pb(y);
        mp[y]++;
    }
    int mn = INT_MIN;
    for(auto i:mp)
    {
        if(i.second > mn)
        {
            mn = i.second;
        }
    }
    cout << mn << nl;
    

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
