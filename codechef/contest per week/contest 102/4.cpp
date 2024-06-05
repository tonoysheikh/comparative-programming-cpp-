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
    ll res = 0;
    int cheak;
    for(int i = 2; i < len;i+=2)
    {
        cheak = 0;
        int a = s[i - 2] - '0' , b = s[i - 1] - '0' , c = s[i] - '0';
        if((a|b ) == c)
        {
            cheak++;
        }
        if((a&b ) == c)
        {
            cheak++;
        }
        if((a^b ) == c)
        {
            cheak++;
        }

        if(res == 0 && i == 2)
        {
            res = cheak;
        }
        else
        {
            res = (res * cheak) % mod;
        }
    }

    cout << res << nl;



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