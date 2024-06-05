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
    int a , b;
    cin >> a >> b;
    
    vector<string>s;
    vector<string>ss;
    for(int i = 0; i < a;i++)
    {
        string x;
        cin >> x;
        s.pb(x);
    }
    for(int i = 0; i < b;i++)
    {
        string y;
        cin >> y;
        ss.pb(y);
    }
    bool res = false;
    for(int i = 0;i < s.size();i++)
    {
        res = false;
        for(int j = 0;j < ss.size();j++)
        {
            if(s[i] == ss[j])
            {
                res = true;
                break;
            }
        }
        if(res)cout << "Yes\n";
        else
        cout << "No\n";
        
    }


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}