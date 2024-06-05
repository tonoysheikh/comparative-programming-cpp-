#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int len;cin >> len;
        string s;cin >> s;
        string temp;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == '0' && s[i+1] == '0')
                temp += "A";
            else if(s[i] == '0' && s[i+1] == '1')
                temp += "T";
                else if(s[i] == '1' && s[i+1] == '0')
                temp += "C";
                else if(s[i] == '1' && s[i+1] == '1')
                temp += "G";
                i++;
        }

        cout << temp << endl;

    }
    return 0;
}
