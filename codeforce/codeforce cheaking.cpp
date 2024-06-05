#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char c;
        cin >> c;
        string s = "codeforces";
        int cnt = 0;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == c)
            {
                cnt = 1;
            }
            else
                continue;
        }
        if(cnt == 1)
            cout << "YES\n";
        else
            cout << "No\n";
    }
    return 0;
}
