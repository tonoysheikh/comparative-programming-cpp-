#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        for(int i =0;i <s.size();i++)
        {
            if(s[i] == 'p' && s[i+1] == 'r' && s[i+2] == 'i' && s[i+3] == 'm' && s[i+4] == 'e')
                flag = 1;
        }
        if(flag == 1)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
