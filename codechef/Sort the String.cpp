#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 1;i < len;i++)
    {
       if(s[i] == '0' && s[i -1] == '1')
       {
           cnt++;
       }
       else
       {
           continue;
       }
    }
    cout << cnt << "\n";


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


