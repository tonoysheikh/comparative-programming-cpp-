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



int  solve()
{

    ll n , m;
    cin >> n >> m;
    vector<pair<ll,ll>> v;
    
    while(m--)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back(make_pair(b,a));
        
    }
    sort(v.rbegin(),v.rend());
    ll sum = 0;
    for(int i = 0;i < v.size();i++)
    {
        if(v[i].second > 0)
        {
            ll guess = min(v[i].second , n);
            sum+= v[i].first * guess;// 20 30 40 50 56 62
            //v[i].second--; // 4 3 2 1 0 2 1
            n = n - guess;// 6 5 4 3 2 1 0
            if(n == 0)
            {
                return sum;
            }
        }

    }

    return sum;
    

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    ll result = solve();

    cout << result << nl;

    return 0;
}