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



void solve()
{
    int len = 8;
    vector<int>v;
    lp(i,1,len)
    {
        int x;
        cin >> x;
        if((x >= 100 && x <= 675) && (x % 25 == 0))
        {
            v.pb(x);
        }
        else
        {
            cout << "No\n";
            return;
        }
    }
    bool res = false;
    lpz(i , 0, len - 2)
    {
        if(v[i] <= v[i+1])
        {
            continue;
        }
        else
        {
            res = true;
            break;
        }
    }
    if(res)
    {
        cout << "No\n";
        return;
    }
    else
    {
        cout << "Yes\n";
        return;
    }


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();

    return 0;
}