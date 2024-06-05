#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    map<string,int>mp;

    while(len--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if(mp[s] == 1)
            cout << "OK\n";
        else
        {
            cout << s << mp[s] - 1 << endl;

        }
    }

    return 0;
}
