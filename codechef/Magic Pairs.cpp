#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long len;
    cin >> len;
    vector<int>v;
    for(long long  i = 0;i < len;i++)
    {
        long long x;
        cin >> x;
    }
    cout << (len * (len - 1))/2 << "\n";

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