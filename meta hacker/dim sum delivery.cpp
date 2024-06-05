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


    int x , y , a , b;
    int p = 1 , q = 1;
    cin >> x >> y >> a >> b;
    int temp1 = 0 , temp2 = 0;
    while(1)
        {
            p = p + a;
            if((p >= x and q == y) or (q >= y and p == x))
            {
                temp1 = 1;
                break;
            }
            else 
            {
                continue;
            }
            q = q + b;
            if((p >= x and q == y) or (q >= y and p == x))
            {
                temp2 = 1;
                break;
            }
            else
            {
                continue;
            }
        }
        if(temp1 == 1)
        {
            cout << "YES\n";
        }
        else if(temp2 == 1)
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