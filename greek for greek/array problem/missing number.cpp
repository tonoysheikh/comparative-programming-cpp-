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



void solve()
{
    int len, k;
    cin >> len >> k;
    vector<int>v;
    lpz(i,0,len)
    {
        int x;
        cin >> x;
        v.pb(x);   
    }
    int sum = accumulate(v.begin(), v.end(),0);
    //cout << sum << nl;
    int n = k*(k+1)/2;

    cout << n - sum << nl;


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