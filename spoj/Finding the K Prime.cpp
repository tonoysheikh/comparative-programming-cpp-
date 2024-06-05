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
bool prime[90000001];
vector<int>v;
void solve()
{
    int maxN = 90000000;
    
    for(int i = 2;i*i <= maxN;i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i*i;j <= maxN;j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for(int i = 2;i <= maxN;i++)
    {
        if(prime[i] == 0)
        {
            v.pb(i);
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    int t;
    cin >> t;
    while(t--)
    {
        
        int num;
        cin >> num;

        cout << v[num -1] << nl;
    }


    return 0;
}
