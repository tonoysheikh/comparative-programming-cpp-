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
    ll n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    string x="",y="";
    for(ll i=0;i<n;i++)x+=b[i];
    for(ll j=m-n;j<m;j++)y+=b[j];
    if(x==y && a==x){
        cout<<"0\n";
    }else if(x==a){
        cout<<"1\n";
    }else if(y==a){
        cout<<"2\n";
    }else{
        cout<<"3\n";
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   solve();

    return 0;
}