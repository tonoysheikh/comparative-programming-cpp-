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

    int x , y , z;
    cin >> x >> y >> z;
    int m = min({x, y, z});
    int c = 0;
    bool res = true;
    if(x%m != 0 || y%m != 0|| z%m != 0)
    {
        res = false;
    }
    while(x != m)
    {
        if(x % m != 0 || c > 3)
        {
            res = false;
            break;
        }
        x = x - m;
        c++;
    }
    while(y != m)
    {
        if(y % m != 0 || c > 3)
        {
            res = false;
            break;
        }
        y = y - m;
        c++;
    }
    while(z != m)
    {
        if(z % m != 0 || c > 3)
        {
            res = false;
            break;
        }
        z = z - m;
        c++;
    }
    if(c > 3)
    {
        res = false;
    }
    if(res)
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