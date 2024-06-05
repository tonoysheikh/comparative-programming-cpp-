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
#define ull unsigned long long



void solve()
{

    int len;
    cin >> len;
    map<int , int>mp;
    for(int i = 0; i < 4*len - 1; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int mn = INT_MAX;
    int res;
    for(auto it:mp)
    {
        if(it.second < mn)
        {
            mn = it.second;
            res = it.first;
        }
    }
    cout << res << nl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}