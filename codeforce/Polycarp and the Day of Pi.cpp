#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    string value = "3141592653589793238462643383279";
    int cnt = 0;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] == value[i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << cnt << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
