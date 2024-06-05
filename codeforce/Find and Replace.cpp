#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long len;
    cin >> len;
    string s;
    cin >> s;

     bool result = true;
    for(int i = 0;i < len;i++)
    {
      for(long long j = 0;j < len;j++)
      {
          if(s[i] == s[j]  && i % 2 != j%2)
            result = false;
      }

    }

    if(result)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
