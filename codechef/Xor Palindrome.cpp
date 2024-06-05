#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0;i < s.size()/2;i++)
    {
        if(s[i] != s[len - 1 - i])
        {
            cnt++;
        }
    }
    cout << (cnt + 1)/2 << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
