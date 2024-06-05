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
    int n , x , k ,p;
    cin >> n >> x >> k>>p;
    int add;
    if(n == k)
    {
        add = p + 20;
    }
    else
    {
        add = p;
    }
    int cnt = 0;
    if(k == 0)
    {
        cout << p << nl;
    }
    else
    {
        while(k--)
        {
            if(x > 0 )
            {
                add += 10;
                x--;
            }
            else
            {
                add += 5;
            }
        }

            cout << add << nl;

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

