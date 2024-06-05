#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    cin >> s >>ss;
    sort(s.begin(),s.end());
    sort(ss.begin(),ss.end());
    int cnt = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] != ss[i])
            cnt = 1;
    }
    if(cnt == 1)
        cout << "No\n";
    else
        cout << "Yes\n";

    return 0;
}
