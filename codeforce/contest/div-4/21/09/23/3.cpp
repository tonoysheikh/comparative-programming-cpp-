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
    char a[10][10];
    for(int i = 0;i <= 9;i++)
    {
        for(int j = 0;j <= 9;j++)
        {
            cin >> a[i][j];

        }
    }
    int sum = 0;
    for(int i = 0; i <=9;i++)
    {
        for(int j = 0;j <= 9;j++)
        {
            if(a[i][j] == 'X')
            {
                if((i == 0 and j <=9) or  (j == 0 and i <= 9) or (i == 9 and j <= 9) or (j == 9 and i <= 9))
                {
                    sum += 1;
                }
                else if( (i == 1 and j > 0 and j < 9) or (i == 8 and j > 0 and j < 9 ) or ( j == 1 and i > 0 and i < 9) or  ( j == 8 and i > 0 and i < 9))
                {
                    sum += 2;
                }
                else if( (i == 2 and j > 1 and j < 8) or (i == 7 and j > 1 and j < 8 ) or ( j == 2 and i > 1 and i < 8) or  ( j == 7 and i > 1 and i < 8))
                {
                    sum += 3;
                }
                else if( (i == 3 and j > 2 and j < 7) or (i == 6 and j > 2 and j < 7 ) or ( j == 3 and i > 2 and i < 7) or  ( j == 6 and i > 2 and i < 7))
                {
                    sum += 4;
                }
                else
                {
                    sum += 5;
                }
                
            }
            else
            {
                continue;
            }
        }

        
    }
    cout << sum << nl;


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