
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

        for(auto i:mp)
        {
            cout << i.first << endl;
        }

    }



    return 0;
}
