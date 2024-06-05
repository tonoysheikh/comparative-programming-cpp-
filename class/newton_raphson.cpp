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

    //function
    //f(x) = pow(x,2) - 3x + 2;
    //f'(x) = 1*2*x - 3 = 2x - 3

    double a = 0.00;

    int n;
    cin >> n;
    while(n--)
    {
        double m = pow(a,2) - 3 * a + 2;
        double n = 2 * a - 3;
        double b = a - m/n;
        
        a = b;

        if(b == 0.0)
        {
            cout << a << nl;
            return;
        }
        else
        {
            cout << a << nl;
        }
    }


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}