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
    int num;
    cin >> num;
    num++;

    while(1)
    {
        string s = to_string(num);
        string temp = s;
        reverse(temp.begin(),temp.end());
        
        if(temp == s)
        {
            cout << s << nl;
            return;
        }
        else
        {
            num++;
        }
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
