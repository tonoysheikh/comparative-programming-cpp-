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
    int len1 , len2 , len3;
    cin >> len1 >> len2 >> len3;

    vector<int>v;
    vector<int>vv;
    vector<int>vvv;
    for(int i = 0;i < len1;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    for(int i = 0;i < len2;i++)
    {
        int x;
        cin >> x;
        vv.pb(x);
    }
    for(int i = 0;i < len3;i++)
    {
        int x;
        cin >> x;
        vvv.pb(x);
    }

    int a =0, b= 0,c=0;
    while(a < len1 and b < len2 and c < len3)
    {
        if(v[a] == vv[b] and vv[b] == vvv[c])
        {
            cout << v[a] << " ";
            a++;
            b++;
            c++;
        }
        else if(v[a] < vv[b])
        {
            a++;
        }
        else if(vv[b] < vvv[c])
        {
            b++;
        }
        else
        {
            c++;
        }
    }


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