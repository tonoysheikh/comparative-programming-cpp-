#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len;
    cin >> len;
    int a[len];
    for(int i = 0;i < len;i++)
    {
        cin >> a[i];
    }
    sort(a,a+len);
    int min = 10000;
    for(int i = 1;i < len;i++)
    {
        if( abs(a[i] - a[i-1]) < min)
            min = abs(a[i] - a[i - 1]);
    }
    cout << min << "\n";
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
