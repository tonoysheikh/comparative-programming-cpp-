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
    int len;
    cin >> len;
    
    int mx = INT_MIN;
    int res = -1;
    for(int i = 0;i < len;i++)
    {
        int a , b;
        cin >> a >> b;
        
        if(a <= 10 && b > mx)
        {
            mx = b;
            res = i;
        }
    }
    cout << res + 1 << nl;

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
