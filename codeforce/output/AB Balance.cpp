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
    if(s.size() == 1)
    {
        cout << s << nl;
        return;
    }
    int ab = 0 , ba = 0;
    for(int i = 0;i < s.size() - 1;i++)
    {
        if(s[i] == 'a' && s[i+1] == 'b')
        {
            ab++;
        }
        else if(s[i] == 'b' && s[i+1] == 'a')
        {
            ba++;
        }
        else
        {
            continue;
        }
    }
    if(ab == ba)
    {
        cout << s << nl;
    }
    else
    {
        if(s[0] == 'a')
        {
            s[0] = 'b';
        }
        else
        {
            s[0] = 'a';
        }
        cout << s << nl;
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