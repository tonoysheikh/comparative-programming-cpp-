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


int c = 1;
void solve()
{
    int s , d , dec;
    cin >> s >> d >> dec;

    int p , b;
    p = 1 * s + 2 * d;
    b = 2 * s + 2 * d;

    int p1 , b1;
    p1 = dec;
    b1 = p1 + 1;

    if(p >= p1 && b >= b1)
    {
        cout <<"Case #" << c++ << ": " << "YES\n";
    }
    else
    {
        cout << "Case #" << c++ << ": " << "NO\n";
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