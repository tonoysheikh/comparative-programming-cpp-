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

    int len;
    cin >> len;
    vector<ll>v;
    vector<ll>vv;
    for(int i = 0; i < len;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    for(int i = 0; i < len;i++)
    {
        int x;
        cin >> x;
        vv.pb(x);
    }
    ll a = *min_element(v.begin() , v.end());
    ll b = *min_element(vv.begin() , vv.end());
    
    ll cnt = 0;
   
    for(int i = 0;i < len;i++)
    {
        if((a < v[i]) && (b < vv[i]))
        {
          int m= min(v[i] - a , vv[i] - b);
            v[i] = v[i] - m;
            vv[i] = vv[i] - m;
            cnt += m;
            
        }
        else
        {
          continue;
        }
       
        
    }
    
    for(int i = 0;i < len;i++)
    {
       if(a < v[i])
        {
          
           int x = v[i] - a;
            cnt+= x;
            v[i] = a;
          
        } 
       
        
    }
    for(int i = 0;i < len;i++)
    {
        if(b < vv[i])
        {
          int y = vv[i] - b;
           
          cnt += y;
          vv[i] = b;
          
        }
       
        
    }
    cout << cnt<< nl;
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