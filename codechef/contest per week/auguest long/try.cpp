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

    string s;
    cin >> s;

    string g = "codechef";

    vector<string>n;
    int num = 0;
    while(next_permutation(s.begin() , s.end()))
    {
        //n.pb(s);
         for(int i = 0; i < s.size();i++)
            {
                if(s[i] != g[i])
                {
                    num++;
                    if(num == 8)
                    {
                        cout << s << nl;
                    
                        break;   
                    }
                }
            }
    }
    
    
    

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();

    return 0;

}