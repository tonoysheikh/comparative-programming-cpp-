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
    int a , b , c;
    cin >> a >> b >> c;
    int sum = a +b+c;
    int result =min({a,b,c});
    cout << sum - result << nl;

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
