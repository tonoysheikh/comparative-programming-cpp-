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
    int n;
    cin >> n;
    //vector<int>v;
    int odd = 0;
    int even =0;
    for(int i = 0;i < 2*n;i++)
    {
        int x;
        cin >> x;
        if(x % 2 == 0)
        even++;
        else
        odd++;
        //v.pb(x);
    }
    int res = min(even , odd);
    if(res == n)
    yes();
    else
    no();
    

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
