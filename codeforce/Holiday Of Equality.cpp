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
    
    vector<int>v;
    int mx = INT_MIN;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        mx = max(mx,x);
        v.pb(x);
    }
    if(n == 1)
    {
        cout << 0 << nl;
        return;
    }
    int sum = 0;
    for(int i = 0;i < n;i++)
    {
        if(mx > v[i])
        {
            int sub = mx - v[i];
            sum += sub; 
        }
    }
    cout << sum << nl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();
    


    return 0;
}
