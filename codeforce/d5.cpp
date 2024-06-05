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

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve()
{
    vector<int>v;
    lp(i,1,10000)
    {
        if(i % 3 == 0 || i % 10 == 3)
        {
            continue;
        }
        else
        {
            v.pb(i);
        }
    }
    int n;
    cin >> n;
    cout << v[n - 1] << nl;

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
