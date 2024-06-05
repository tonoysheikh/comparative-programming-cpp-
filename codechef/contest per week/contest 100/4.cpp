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
    ll len;
    cin >> len;

    vector<ll>v;

    for(ll i = 0; i < len;i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    int cnt = 1;
    for(int i = 0; i < len - 1;i++)
    {
        if(v[i] == v[i+1])
        {
            cnt++;
            if(cnt == len)
            {
                cout << -1 << nl;
                return;
            }
        }
    }
    vector<ll>res;
    for(int i=0; i<len-1; i++)
    {
        if(i == 0)
        {
            //cout << v[i] << " ";
            continue;
        }
        else if(i > 0 && v[i]<v[i+1])
        {
            swap(v[i],v[i+1]);
            i++;
        }
        else
        {
            continue;
        }
    }

    for(auto  it : v)
    {
        cout << it << " ";
    }
    cout << nl;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    test(){
    solve();
    }
    //solve();

    return 0;
}