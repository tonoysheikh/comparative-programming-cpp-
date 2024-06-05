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
    int x, h;
    cin >> x >> h;
    int res = x/2;

    int turn = res * 5;
    if(turn >= h)
    {
        if(h % res == 0)
        {
            cout << h/res << nl;
        } 
        else
        {
            cout << h/res + 1 << nl;
        }
    }
    else
    {
        int sub = h - turn;
        int ans;
        if(sub % x == 0)
        {
            ans = sub/x;
        }
        else
        {
            ans = sub/x + 1;
        }
        
        cout << ans + 5 << nl;
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