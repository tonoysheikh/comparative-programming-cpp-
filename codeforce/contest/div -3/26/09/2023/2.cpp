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
    vector<ll>v;
    
    int cnt = 0;
    for(int i = 7;;i += 2)
    {
       v.pb(i);
       cnt++;
       if(cnt ==  len)
       {
          break;
       }
    }
    vector<ll>vv;
    
    for(int i = 0;i < len;i++)
    {
        cout << v[i] << " ";
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