#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int len;
    cin >> len;
    while(len--)
    {
        string s;
        cin >> s;
        mp[s]++;

        if(mp[s] == 1)
            cout << "NO\n";
        else
            cout << "YES\n";

    }



    return 0;
}
