#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n' 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
#define lpz(i, a, b) for (int i=a; i<b; i++)
#define lp(i, a, b) for (int i=a; i<=b; i++)
#define test() int t; cin>>t; while(t--)
#define ull unsigned long long

bool isprime(ll num)
{
    
    if(num == 2)return true;
    else if(num == 1)return false;
    else if(num % 2 == 0)return false;
    for(ll i = 3;i*i <= num;i+= 2)
    {
        if(num % i == 0)return false;
    }
    return true;

}

void solve()
{
    ll n;
    cin >> n;
    ll cnt , res = 0;
    for(ll i  = 1;i <= n;i++)
    {
        cnt = 0;
        for(ll j = 2;j <= i;j++)
        {
            if(isprime(j))
            {
                if(i % j == 0)cnt++;
            }
        }
        if(cnt == 2)res++;
    }
    cout << res << nl;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}