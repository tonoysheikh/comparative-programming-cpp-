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
    vector<int>v;
    int sum = 0;
    lpz(i,0,len)
    {
        int x;
        cin >> x;
        v.pb(x);
        sum += x;
    }
    if(len == 1)
    {
        cout << 0 << nl;
        return;
    }
    sort(v.begin() , v.end());
    int mn = *min_element(v.begin() , v.end());
    int d = count(v.begin() , v.end() , mn);
    int res = mn * d;
    int avg = res/d;

    int c = 1;
    lpz(i, 0, v.size() -1)
    {
        if(v[i] == v[i+1])
        {
            c++;
            if(c == len)
            {
                cout << 0 << nl;
                return;
            }
        }
    }
    int cnt = 0;
    lpz(i,0,v.size())
    {
        if(v[i] > avg)
        {
            cnt++;
        }
    }
    cout << cnt << nl;


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