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
    int len, num;
    cin >> len >> num;
    vector<int>v;
    vector<int>vv;
    vector<int>vvv;
    for(int i = 0; i < len;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    for(int i = 0; i < len;i++)
    {
        int y;
        cin >> y;
        vv.pb(y);
        vvv.pb(y);
    }
    sort(vv.rbegin() , vv.rend());
    for(int i = 0;i < len;i++)
    {
        for(int j = 0;j < len;j++)
        {
            if(vv[i] == vvv[j])
            {
                if(v[j] + j <= num)
                {
                    cout << j + 1 << nl;
                    return;
                }
            }
        }
    }
    cout << -1 << nl;


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