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
    int x;
    cin >> x;

    if(x % 2 == 1)
    {
        int a = 1;

        x = x - a;

        cout << a << " " << x/2 << " " << x/2 << nl;

    }
    else
    {
        int p = 1;
        int q = 1;
        cout << p << " " << q << " " << x - 2 << nl;
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