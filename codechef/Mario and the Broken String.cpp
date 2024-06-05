#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;

    string a,b;
    for(int i = 0;i < len/2;i++)
    {
        a += s[i];
    }


    for(int i = len/2;i < len;i++)
    {
        b += s[i];
    }


    if(a == b)
        cout << "YES\n";
    else
        cout << "NO\n";


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
