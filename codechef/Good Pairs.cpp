#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int len;
    cin >> len;
    vector<long long int>v;
    for(long long int i = 0; i < len;i++)
    {
        long long int x;
        cin >> x;
        v.push_back(x);
    }
    long long int cnt = 0;
    for(long long int  i = 0; i < len - 1;i++)
    {
        for(long long int j = i + 1; j < len;j++)
        {
            long long int g = __gcd(v[i] , v[j]);
            long long int l = (v[i]*v[j])/g;

            if(g == l)
            cnt++;
        }
    }
    cout << cnt << "\n";

}
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}