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
    int k , r;
    cin >> k >> r;
    int sum = 0;
    for(int i = 1;;i++)
    {
        sum += k;
        if((sum % 10 == 0) || (sum % 10 == r))
        {
            cout << i << nl;
            break;
        }
        else
        continue;
    }
    

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();
    


    return 0;
}
