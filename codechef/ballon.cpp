#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len;
    cin >> len;
    vector<int>v;
    for(int i = 0;i < len;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int temp;
    for(int i = len - 1;i >=0;i--)
    {
        if(v[i] <= 7)
        {
            temp = i;
            break;
        }
    }
    cout << temp + 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

}