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

    int h , w;
    cin >> h >> w;

    for(int i = 0;i < h;i++)
    {
        for(int j = 0;j < w;j++)
        {
            if(i == 0 or i == h - 1)
            {
                if(i % 2 == 0 and j % 2 == 0)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if(j == 0 or j == w - 1)
                {
                    if(i % 2 == 0)
                    {
                        cout << 1;
                    }
                    else
                    {
                        cout << 0;
                    }
                }else
                {
                    cout << 0;
                }

            }
        }
        cout << nl;
    }
    cout << nl;

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