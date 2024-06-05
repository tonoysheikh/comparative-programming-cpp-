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
    int n, k;
    cin >> n >> k;
    int time = 240;
    int remainder = time - k;
    int pblm = 5;
    int i = 2;
    int cnt = 0;
    while(remainder >= pblm)
    {
        cnt++;
        remainder -= pblm;
        pblm = 5 * i;
        i++;
        
    }
    if(cnt > n)
    cout << n << nl;
    else
    cout << cnt << nl;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();
    


    return 0;
}
