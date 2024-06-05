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
    vector<int>v;

    int p , e;
    cin >> p >> e;
    int a = p - e;
    
    if(a < e)
    {
        cout << "Case " << c++ << ": " <<  "impossible\n";
        return;
    }
    else{
        if(a % 2 == 1)
        {
            cout <<"Case " << c++ << ": " << a << nl;
        }
        else
        {
            while(a > e)
            {
                v.pb(a);
                a = a / 2;
            }
            sort(v.begin() , v.end());
            cout << "Case " << c++ << ": ";
            for(auto it:v)
            {
                cout << it << " ";
            }
            
            cout << nl;
        }
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