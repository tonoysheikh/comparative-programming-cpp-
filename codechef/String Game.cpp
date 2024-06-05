

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    string a , b;
    for(int i = 0;i < len;i++)
    {
       if(i % 2 == 0)
       {
           a += s[i];
       }
       else
       {
           b +=s[i];
       }
    }
    if(a == b)
        cout << "YES" << "\n";
    else
    {
        cout << "NO" << "\n";
    }


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


