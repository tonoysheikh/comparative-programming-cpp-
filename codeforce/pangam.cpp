#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int cnt = 0;

    for(int i = 0;i< n ;i++)
    {
        s[i] = towlower(s[i]);

    }
    sort(s.begin() , s.end());
    for(int i = 0;i< n ;i++)
    {
        if(s[i] != s[i + 1])
            cnt++;

    }
    if(cnt == 26)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";

    return 0;
}
