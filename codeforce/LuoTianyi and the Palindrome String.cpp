#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    bool result = true;
    for(int i= 1;i < len;i++)
    {
        if(s[0] != s[i])
        {
            result = false;
            break;
        }
    }
    if(result)
    {
        cout << "-1\n";
    }
    else
    {
        cout << len - 1 << "\n";
    }

}


int main()
{
    int t;cin >>t;
    while(t--)
    {
        solve();
    }
}
