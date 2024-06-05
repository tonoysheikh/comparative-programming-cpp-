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
    int a;
    cin>>a;
    int sum1 = pow(2,a);
    int sum2 = 0;
    for(int i = 1;i < a/2;i++)
    {
        sum1 += pow(2,i);
    }
    for(int i = a/2;i < a;i++)
    {
        sum2 += pow(2,i);
    }

    cout << sum1 - sum2 << nl;
    

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
