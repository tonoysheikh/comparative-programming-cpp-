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
    string s;
    cin >> s;
    bool result = false;
    for(int i = 0; i < len - 1;i++)
    {
        if(s[i] == s[len - 1])
        {
            result = true;
            break;
        }
    }
    if(result)
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
