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
    string s,ss;
    cin >> s >> ss;

    bool res = true;
    for(int i = 0;i < s.size();i++)
    {
        if(( ('a' <= ss[i]) && (ss[i] <= 'z' ) ) && ( ('a' <= s[i]) && (s[i] <= 'z'))) 
        {
            if(s[i] != ss[i])
            {
                res = false;
                break;
            }
            else
            {
                continue;
            }
            
        }
        else
        {
           continue;
        }
    }
    if(res)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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