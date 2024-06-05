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



void solve()
{
    int len;
    cin >> len;
    set<int>all;
    vector<int>v;
    lpz(i,0,len)
    {
        int x;
        cin >> x;
        v.pb(x);
        all.insert(x);
    }
    int len1;
    cin >> len1;
    vector<int>vv;
    lpz(i,0,len1)
    {
        int y;
        cin >> y;
        vv.pb(y);
        all.insert(y);
    }
    for(auto it:all)
    {
        cout << it << " ";
    }
    cout << nl;

    // duplicate value remove
    v.erase(unique(v.begin(),v.end()), v.end());
    vv.erase(unique(vv.begin(),vv.end()), vv.end());

    // adjoint 2 vector
    vector<int>res;

    for(int i = 0 ; i < v.size();i++)
    {
        res.pb(v[i]);
    }
    for(int i = 0 ; i < vv.size();i++)
    {
        res.pb(vv[i]);
    }


    map<int,int>mp;
    for(int i = 0;i < res.size();i++)
    {
        mp[res[i]]++;
        if(mp[res[i]] > 1)
        {
            cout << res[i] << " ";
        }
    }
    cout << nl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;

}