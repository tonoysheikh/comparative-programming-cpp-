#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            cnt++;
    }
    if(cnt >= 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
