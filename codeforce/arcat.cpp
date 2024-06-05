#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<int , int>mp;
    for(int i =0 ;i < t;i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int cnt = 0;
    for(auto i:mp)
    {
        int f = i.first;
        int s = i.second;

        if(f > s)
        {
            cnt += s;
        }
        else
        {
            cnt += s - f;
        }
    
    }
    cout << cnt << endl;

    return 0;
}