#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len;
    cin >> len;

    int a[len];
    for(int i = 0;i < len;i++)
        cin >> a[i];
    sort(a,a+len);
    int cnt = 1;
    bool result = true;
    if(len % 2 == 1)
    {
        cout << "NO\n";
       return;
    }

    for(int i = 1;i < len;i++)
        {
            if(a[i] == a[i-1])
                cnt++;
              else
              {
                  if(cnt%2 == 1)
                    result = false;
                    cnt = 1;
              }
        }
        if(result)
            cout << "YES\n";
        else
            cout << "No\n";

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
