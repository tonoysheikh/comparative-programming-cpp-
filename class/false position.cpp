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
    double a , b;
    cin >> a >> b;
    
   while(1)
    {
        double f1 = pow(a,3) - a - 6;
        double f2 = pow(b,3) - b - 6;

        double c = a - ((f1 * (b -a))/ (f2- f1));
        

        double f3 = pow(c,3) - c - 6;

        if(f3 == 0.00)
        {
            cout << c << nl;
            return;
        }

        if((f1 >= 0 and f2 < 0) or (f1 < 0 and f2 >= 0))
        {
            if((f1 < 0 and f3 < 0) or (f1 >= 0 and f3 >= 0))
            {
                a = c;
            }
            else
            {
                b =c;
            }
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