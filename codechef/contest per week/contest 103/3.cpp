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
    ll len;
    cin >> len;
    string s;
    cin >> s;
    string k;
    int cnt = 0;
    for(int i = s.size()-1;i >= 0;i--)
    {
        k+= s[i];
        cnt++;
        if(cnt == 3)
        {
            break;
        }
    }
    reverse(k.begin() , k.end());
    //cout << k << nl;
    ll n = stoi(k);
    if(n % 8 == 0)
    {
        cout << s << nl;
        return;
    }
    else
    {
        if(len == 1)cout << 8 << nl;
        else if(len == 2)
        {
            for(int i  = 10;i <= 99;i++)
            {
                if(i % 8 == 0)
                {
                    cout << i << nl;
                    break;
                }
            }
        }
        else 
        {
            for(int i  = 100;i <= 999;i++)
            {
                if(i % 8 == 0 && n - i < 8)
                {
                    cout << i << nl;
                    break;
                }
            }
            
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