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
    int a , b , c , d , e , f;
    cin >> a >> b >> c >> d >> e >> f;
    int sum1 = a + b + c;
    int x = min({a,b,c});
    int res1 = sum1 - x;

    int sum2 = d + e + f;
    int y = min({d,e,f});
    int res2 = sum2 - y;

    if(res1 > res2)
    cout << "Alice" << nl;
    else if(res1 < res2)
    cout << "Bob" << nl;
    else
    cout << "Tie" << nl;

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
