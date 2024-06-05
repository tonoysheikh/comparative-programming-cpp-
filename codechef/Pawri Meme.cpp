#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>> t;
    while(t--)
    {
        string s;
        cin >> s;
        string res;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i]=='p' && s[i+1] == 'a'&&s[i+2] == 'r'&&s[i+3] == 't'&&s[i+4] =='y')
            {
                res += "pawri";
                i+=4;
            }
            else
            {
                res += s[i];
            }
        }
        cout << res << endl;
    }

    return 0;
}
