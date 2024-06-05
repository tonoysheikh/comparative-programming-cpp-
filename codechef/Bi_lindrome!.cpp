
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int cnt = 1;
    for(int i = 0;i < len;i++)
    {
        if(s[i] == s[i+1] || s[i] == s[i-1])
        {
            cnt++;
            i++;
        }
    }
    if(cnt == 1)
        cout << -1 << "\n";
    else
    {
        cout << len - 2 << "\n";
    }


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


