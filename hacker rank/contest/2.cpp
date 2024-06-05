#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define pi 3.1415926535897932384626433832795

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve()
{
    
    string s;
    cin >> s;
    
    
    reverse(s.begin(),s.end());
    
        if(s[0] - '0' > 2 )
            {
                cout << "no" << nl;    
                
            }
            else if(s[0] - '0'== 2 && s[1]-'0' >4)
            {
                cout << "no\n";
            }
            else if(s[0]- '0' == 2 && s[1] -'0' ==4)
            {
                if(s[3]-'0' != 0 || s[4] - '0' != 0)
                cout << "no\n";
                else
                cout << "yes\n";
            }

            else if(s[3] - '0' > 5)
            {
                cout << "no\n";
            }
            else
            {
                cout << "yes\n";
   
            }      

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    


    return 0;
}
