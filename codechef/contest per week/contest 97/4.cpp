#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define pi 3.1415926535897932384626433832795

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0;i < n - 1;i++)
    {
        for(int j  = i + 1;j < n ;j++)
        {
            if(s[i] == ':')
            {
                if(s[j] == ')')
                {
                    if(s[j+1] == ')')
                    continue;
                    else if(s[j+ 1] == ':')
                    {
                        cnt++;
                    }    

                }
                else
                {
                    break;
                }
                
                

            }
            else
            {
                break;
            }
            

        }
    }

    cout << cnt << nl;

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
