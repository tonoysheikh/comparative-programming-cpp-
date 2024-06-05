#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        map<int ,int>mp;
        int s;
        cin>>s;
        int cnt = 0;

        for(int i =0;i < s;i++)
        {
            int a , b;
            cin >> a >> b;
            if(a<= 8)
            {
                mp[a] = max(mp[a] ,b);
            }

        }
        map<int ,int>::iterator it;
        for(it = mp.begin();it != mp.end();it++)
        {
            cnt += (*it).second;
        }
        cout << cnt << endl;
    }

    return 0;
}
