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

    
    if(num < 40)
    {
        if(num == 38 || num == 39)
        {
            cout << 40 << nl;
        }
        else
        {
            cout << num << nl;
        }

        
    }
    else
    {
        if(num % 5 == 0)
        {
            cout << num << nl;
        }
        else if(num % 5 != 0)
        {
            int d = num / 5;
            int m = num % 5;
            if(m > 2)
            {
                cout << d * 5 + 5 << nl;    
            }
            else{
                cout << num << nl;
                
            }
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
