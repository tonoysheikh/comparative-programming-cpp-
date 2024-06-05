#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len;
    cin >> len;
    vector<int>v;
    for(int i =0;i <len;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int mn =INT_MAX;
    for(int i = 0;i < v.size()-1;i++)
    {
        for(int j = i + 1;j < v.size();j++)
        {
            int temp = v[i] + v[j];
            if(mn > temp)
            {
                mn = temp;
            }

        }
    }
    cout << mn << "\n";
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