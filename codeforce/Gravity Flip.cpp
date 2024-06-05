#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    vector<int>v;

    for(int i = 0;i < len;i++)
    {
        int it;
        cin >> it;
        v.push_back(it);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}
