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

void solve()
{
    int len;
    cin >> len;
    
    vector<int>v;
    int move = 0;
    int odd = 0;
    int even = 0;
    lpz(i,0,len)
    {
        int x;
        cin >> x;
        if(x % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }

        if((x % 2 == 0 && i % 2 == 0) || (x % 2 == 1 && i % 2 == 1))
        {
            continue;
        }
        else
        {
            move++;
        }

        
    }
    
    if(move == 0)
    {
        cout << 0 << nl;
    }
    else if(len % 2 == 0 && even == odd)
    {
        cout << move/2 << nl;
    }
    else if(len % 2 == 1 && even == odd + 1)
    {
        cout << move/2 << nl;
    }
    else
    {
        cout << -1 << nl;
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
