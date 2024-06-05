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


int x = 1;
void solve()
{
    
    int r , c , a , b;
    cin >> r >> c >> a >> b;

    if(r > c)
    cout <<"Case #"<< x++ << ": " << "YES\n";
    else
    cout <<"Case #"<< x++ << ": " <<  "NO\n";

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    test()
    solve();

    return 0;
}