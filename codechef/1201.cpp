#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len , value;
    cin >> len >> value;
    vector<int>v;
    for(int i = 0;i < len;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int operation = 0;
    for(int i =0; i < len;i++)
    {
        operation = (operation | v[i]);

    }
    bool flag = false;
    for(int i = 0; i <= value;i++)
    {
        int result;
        result = operation | i;
        if(result == value)
        {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    if(!flag)
    {
        cout << -1 << endl;
    }
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