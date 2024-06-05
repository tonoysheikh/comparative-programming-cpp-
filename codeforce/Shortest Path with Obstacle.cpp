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
    int a1 , a2, b1 , b2,c1,c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    int res = abs(a1 - b1) + abs(a2 - b2);

    if((a1 < c1 and b1 > c1 and a2 == b2 and b2 == c2) or (a1 > c1 and b1 < c1 and a2 == b2 and b2 == c2))
    {
        cout << res + 2 << nl;
    }
    else if((a2 < c2 and b2 > c2 and a1 == b1 and b1 == c1) or (a2 > c2 and b2 < c2 and a1 == b1 and b1 == c1))
    {
        cout << res + 2 << nl;
    }
    else
    {
        cout << res << nl;
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