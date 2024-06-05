#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 1;
    int max = 1;
    for(int i = 0; i < s.size();i++)
    {
        if(s[i] == s[i+1])
        {
            cnt++;
            if(cnt >= max)
                max = cnt;
        }
        else
        {
            cnt = 1;
        }
    }
    cout << max << "\n";

    return 0;
}
