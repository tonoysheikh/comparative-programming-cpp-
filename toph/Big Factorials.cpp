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
    ll c, n, fact = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
        fact = fact % 10000; // num 10 100 1000 10,000
    }
    cout << fact << nl;
    

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
        solve();
    


    return 0;
}
