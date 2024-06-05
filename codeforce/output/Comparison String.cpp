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
    string s;
    cin >> s;
    int cnt = 1;
    int cnt1 = 1;
    int mx = 1;
    int m = 1;
    for(int i = 0; i < len -1;i++)
    {
        if(s[i] == '<' and s[i+1] == '<')
        {
            cnt++;
            if(cnt > mx)
            {
                mx = cnt;
            }
        }
        else
        {
            cnt = 1;
        }
    }
    for(int i = 0; i < len -1;i++)
    {
        if(s[i] == '>' and s[i+1] == '>')
        {
            cnt1++;
            if(cnt1 > m)
            {
                m = cnt1;
            }
        }
        else
        {
            cnt1 = 1;
        }
    }
    cout << max(m, mx) + 1 << nl;


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