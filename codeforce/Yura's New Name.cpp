#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int len = s.size();

    int cnt = 0;

    if(s[0] == '^' && len == 1)
        cnt++;

        if(s[0] == '_')
            cnt++;
            if(s.back() == '_')
                cnt++;
    for(int i = 0;i < len-1;i++)
    {
        if(s[i] == '_'  && s[i+ 1] == '_')
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
}


int main()
{
    int t;cin >>t;
    while(t--)
    {
        solve();
    }
}

