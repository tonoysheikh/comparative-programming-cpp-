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
    string s , ss;
    cin >> s >> ss;

    string n , nn;
    for(int i = 0;i < s.size();i++)
    {
        n += tolower(s[i]);
    }
    for(int i = 0;i < ss.size();i++)
    {
        nn += tolower(ss[i]);
    }

    if(n == nn)
    {
        cout << 0 << nl;
    }
    else if(n < nn)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << 1 << nl;
    }


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();

    return 0;
}