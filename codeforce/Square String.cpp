#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    bool result = true;
    if(len % 2 == 0)
    {
        for(int i = 0;i < len/2;i++)
        {
            if(s[i] != s[i + len/2])
            {
                result = false;
            }
        }

    }
    else
    {
        result = false;
    }
    if(result)
    cout << "YES\n";
    else
    cout << "NO\n";
    
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