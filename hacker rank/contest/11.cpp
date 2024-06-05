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
    string temp = s;
    int ind;
    bool res = false;
    for(int j = 1;j < temp.size();j++)
        {
            if(s[0] == temp[j])
            {
                ind = j;
                res = true;
                break;
            }
            
            
        }
        if(res)
        {
            temp.erase(temp.begin()+ind , temp.end());
            cout << temp << nl;

        }
        else
        {
            cout << s << nl;
        }
    

    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    if(t== 1)
    {
        solve();
        return 0;
    }
    t = t - 1;
    while(t--)
    {
        solve();
    }
    return 0;
}
