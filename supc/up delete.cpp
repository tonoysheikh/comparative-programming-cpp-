#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string n;
    int len = s.size();
    for(int i = 0;i < len;i++)
    {
        if(isupper(s[i]) && isupper(s[i+1]) || isupper(s[i]) && isupper(s[i-1]))
            continue;
        else
            cout << s[i];
    }

    return 0;
}
