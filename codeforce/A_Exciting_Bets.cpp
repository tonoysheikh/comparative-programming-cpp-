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
#define test() ll t; cin>>t; while(t--)



void solve()
{
   
    


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    test(){
         ll a , b;
    cin >> a >> b;
    ll d = abs(a-b);
    
    if(a == b)
    {
        cout << 0 << " " << 0 << nl;
        continue;
    }
    ll x = (a % d);
    ll y = (b % d);
     
        if(x == y)
        {
            cout  << d << " " << min(x, d - x) << nl;
        }
        else
        {
            cout << 0 << " " << 0 << nl;
        }
    }
    //solve();

    return 0;
}