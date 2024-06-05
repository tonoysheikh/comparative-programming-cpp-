#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int>v;
    vector<int>ve;
    for(int i = 0;i < t;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0;i < t;i++)
    {
        int y;
        cin >> y;
        ve.push_back(y);
    }
    int cnt = 0;
    for(int i = 0;i < t;i++)
    {
        for(int j =0;j < t;j++)
        {
            if(v[i] == ve[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}
