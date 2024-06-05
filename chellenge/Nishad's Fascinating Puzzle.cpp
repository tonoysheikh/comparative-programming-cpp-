#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >>t;
    while(t--)
    {
        int len;cin>>len;
        string s;
        cin>>s;
        char m = s[0];
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] >= m)
                m = s[i];
        }
        cout << m - 96 << endl;
    }

    return 0;
}
