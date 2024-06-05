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
    int len;
    cin >> len;
    vector<int>v;
    for(int i = 0;i < len;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    string s = to_string(v[len - 1]);
    if(s.back() == '0')
    cout << "Yes\n";
    else
    cout << "No\n";

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();
    


    return 0;
}
