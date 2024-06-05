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
    bool flag = false;
    string n;
    for(int i = 0;i < len;i++)
    {
        if(s[i] == '.')
        {
            n += 'B';
        }
        else if(s[i] == 'H')
        {
            n += 'H';
        }
        else 
        {
            flag = true;
            break;
        }
    }
    if(flag)
    no();
    else
    {
        yes();
        cout << n << nl;
    }


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();
    


    return 0;
}
