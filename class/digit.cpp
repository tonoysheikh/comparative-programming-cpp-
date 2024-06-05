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

    string s;
    cin >> s;
    bool res = false;
    lpz(i, 0 , s.size()-1)
    {
        if(s[i] > s[i+1])
        {
            continue;
        }
        else
        {
            res = true;
            break;
        }
    }
    if(res)cout << "No\n";
    else
    {
        cout << "Yes\n";
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}