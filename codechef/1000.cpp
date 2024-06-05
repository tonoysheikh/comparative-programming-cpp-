#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    int cnt = 0;
    int flag = false;
    for(int i = 0 ;i < len;i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            cnt++;
            if(cnt >= 4)
            {
                flag = true;
                break;
            }
        }
        else
        {
            cnt = 0;
        }
    }
    if(flag)
    cout << "NO\n";
    else
    cout << "YES\n";
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