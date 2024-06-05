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
    string num ;
    cin >> num;
    vector<int>v;
    int len = num.size();
    int n;
    for(int i = 0;i < len;i++)
    {
        n = num[i] - '0';
        v.pb(n);
    }
    string s[10] = {"zero" , "one","two","three","four","five","six","seven","eight","nine"};
    for(int i = 0;i < len;i++)
    {
        cout << s[v[i]] << " ";// 4 -> s[4]
    }
    cout << nl;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();

    return 0;
}