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
    int len;
    cin >> len;

    string s;
    int a =0 ,b=0,o=0 , ab = 0;
    for(int i =0;i < len;i++)
    {
        cin >> s;
        if(s == "A")
        {
            a++;
        }
        else if(s == "B")
        {
            b++;

        }
        else if(s == "O")
        {
            o++;
        }
        else
        {
            ab++;
        }

    }
    //int cnt = 0;
    int res = 0;

    res += max(a , b);
    res += o;
    res += ab;
    cout << res << endl;



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
