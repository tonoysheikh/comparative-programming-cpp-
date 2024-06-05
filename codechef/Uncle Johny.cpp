#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len;
    cin >> len;
    long long a[len];
    for(int i = 0; i < len;i++)
        cin >> a[i];
    int fvt;
    cin >> fvt;
    int temp = a[fvt - 1];
    sort(a,a+len);
    for(int i = 0; i < len;i++)
       {
           if(a[i] == temp)
            cout << i + 1 << "\n";
       }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
