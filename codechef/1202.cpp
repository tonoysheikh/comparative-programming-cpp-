#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len , k , va;
    cin >> len >> k >> va;
    vector<int>v;
    int sum = 0;
    for(int i = 0;i < len;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    int value = (len + k)* va;
    int res = (value - sum);
    if(res <= 0)
    {
        cout << -1 << endl;
    }
    else if(res % k != 0)
    {
        cout << -1 << endl;
    }
    
    else
    {
        cout << res/k << endl;
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