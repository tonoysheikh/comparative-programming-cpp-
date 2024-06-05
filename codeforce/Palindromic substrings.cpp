#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s , ss;
    cin >> s >> ss;
    
    bool result = false;
    for(int i = 0; i < s.size();i++)
    {
        for(int j = 0;j < ss.size();j++)
        {
            if(s[i] == ss[j])
            {
                result = true;
                break;
            }
        }
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