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

    int a , b , c , d;
    cin >> a >> b >> c >> d;

    int m = max((3*a)/10 , (a - (a/250)*c));
    int v = max((3*b)/10 , (b - (b/250)*d));

    if(m == v)
    {
        cout << "Tie\n";
    }
    else if(m > v)
    {
        cout << "Misha\n";
    }
    else
    {
        cout << "Vasya\n";
    }



}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}