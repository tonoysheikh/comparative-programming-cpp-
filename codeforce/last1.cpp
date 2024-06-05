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
    int len;
    cin >> len;
    string x , y;
    
    vector<string>a , b , c, d;
    for(int i = 0;i < len;i++)
    {
        cin >> x >> y;
        if(y == "rat")
        {
            a.pb(x);
        }
        else if(y == "woman" || y == "child")
        {
            b.pb(x);
        }
        else if(y == "man")
        {
            c.pb(x);
        }
        else if(y == "captain")
        {
            d.pb(x);
        }

    }
    for(auto it:a)
    {
        cout << it << nl;
        
    }
     for(auto it:b)
    {
        cout << it << nl;
        
    }
     for(auto it:c)
    {
        cout << it << nl;
        
    }
     for(auto it:d)
    {
        cout << it << nl;
        
    }
    
    


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}