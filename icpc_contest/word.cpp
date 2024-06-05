#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin >>s;
    string res;
    for(int i = 0;i<s.size();i++)
    {
        if(i == 0)
            res += toupper(s[i]);
        else
            res += s[i];
    }

    cout << res << endl;

    return 0;
}
