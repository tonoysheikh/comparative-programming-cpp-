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

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
bool prime(int n)
{
    if(n < 2) return false;
    if(n < 3) return true;
    if(n % 2 == 0)return false;
    for(int i = 3;i <= sqrt(n);i+=2)
    {
        if(n%i == 0)return false;
    }
    return true;
}

void solve()
{
    int len;
    cin >> len;
    int cnt  = 0;
    vector<int>v;
    lpz(i,0,len)
    {
        int x;
        cin >> x;
        if(x % 2 == 0)
        {
            cnt++;
        }
    }
    int res = 1;
    lpz(i,0,cnt)
    {
        res = (res * 2) % mod;
    }
    if(cnt == len)
    {
        res--;
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
