#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007;
typedef long long ll;

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    int one = 0;
    int zero= 0;

    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == '0')
            zero++;
        else
            one++;
    }

    if(zero == one)
        cout << 2 * zero << "\n";
    else
        cout << 2 * min(zero,one) + 1 << "\n";

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

