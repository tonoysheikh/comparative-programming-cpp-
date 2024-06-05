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
    int n , y;
    cin >> n >> y;
    vector<int>v;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    int operation = 0;
    for(int i = 0;i < n ;i++)
    {
        operation = (v[i] | operation);
    }
    int result;
    bool flag = false;
    for(int i = 0;i <= y;i++)
    {
        result = (operation | i);
        if(result == y)
        {
            cout << i << nl;
            flag = true;
            break;
            
        }
        else
        {
            continue;
        }
    }
    if(!flag)
    {
        cout << -1 << nl;
    }
    
   

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
