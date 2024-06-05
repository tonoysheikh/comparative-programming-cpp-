
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cnt =0;
    bool flag = false;
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u')
        {
            cnt++;
            if(cnt > 2)
                {
                    flag = true;
                    break;
                }
        }
        else
            cnt = 0;
    }
    if(flag)
        cout << "Happy\n";
    else
        cout << "Sad\n";




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

