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



void solve()
{
    ll n , k , x;
    cin >> n >> k >> x;
   
     

    ll m = (k * (k + 1)) / 2;
    
    if (x >= m && x <= (n * k - ((k - 1) * k) / 2)) 
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }




}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    test(){
    solve();
    }
    //solve();

    return 0;
}