#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    map<int ,int>mp;
    long long int x[len];

    for(int i = 0;i<len;i++)
    {
        cin >> x[i];
        mp[x[i]]++;
    }

    int mx = 0;
     for(int i = 0;i<len;i++)
    {
        if(mx < mp[x[i]])
            mx=mp[x[i]];
    }
    cout << mx << endl;


    return 0;
}
