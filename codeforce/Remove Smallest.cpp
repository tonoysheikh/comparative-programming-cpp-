#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len;
    cin >> len;
    vector<int>v(len);
    for(auto &it : v)
    {
        cin >> it;
    }

    sort(v.begin(),v.end());
    bool result = true;
    for(int i = 1;i < len;i++)
    {
            result &= ( (v[i] - v[i -1]) <= 1);

    }
    if(result)
        cout << "YES\n";
    else
        cout << "No\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
