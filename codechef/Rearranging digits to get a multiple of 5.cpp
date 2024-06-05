#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    int flag = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '5' || s[i] == '0')
        {
            flag++;
            break;
        }
        else
            continue;
    }

    if(flag > 0)
        cout << "YES" << "\n";
    else

        cout << "NO" << "\n";



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

