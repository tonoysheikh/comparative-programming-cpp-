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
    int n = 8 , m = 8;
    int r[n] = {0};
    int b[m] = {0};
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            char c;
            cin >> c;
            if (c == 'R') 
            {
                r[i]++;
            } 
            else if (c == 'B') 
            {
                b[j]++;
            }
        }
    }
 
    for (int i = 0; i < 8; i++) 
    {
        if (r[i] == 8) 
        {
            cout << 'R' << nl;
            return;
        } 
        else if (b[i] == 8) 
        {
            cout << 'B' << nl;
            return;
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