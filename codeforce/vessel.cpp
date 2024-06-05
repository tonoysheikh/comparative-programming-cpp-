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
    int a , b , c;
    cin >> a >> b >> c;

    if(a == b)
    {
        cout << 0 << nl;
        return;
    }


    int res = abs(a-b);
    int r;
    if(res % c == 0)
    {
        r = res/c;
    }
    else
    {
        r = res/c + 1;
    }

    if(r % 2 == 0)
    {
        cout << r/2 << nl;
    }
    else
    {
        cout << r/2 + 1 << nl;
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