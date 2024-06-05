#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define pi 3.1415926535897932384626433832795

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

int a[10000000][1000000];

void solve()
{
    
    int len;
    cin >> len;
    for(int i = 1 ; i <= len;i++)
    {
        for(int j = 1;j <= len;j++)
        {
            a[i][j] = i+j;
        }
    }
    ll sum = 0;
    ll sum1 = 0;
    ll del;
    for(int i = 1 ; i <= len;i++)
    {
        for(int j = 1;j <= len;j++)
        {
            if(i == 1)
            {
                sum += a[1][j];
                
            }
            if(j == len)
            {
                sum1 += a[i][len];
            }
            
                del = a[1][len];    
            
        }
        
    }
    cout << sum  + sum1 - del<< nl;

    

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
