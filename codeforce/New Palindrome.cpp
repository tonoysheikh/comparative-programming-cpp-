#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;

    if(s.size() % 2)
    {
        s.erase(s.begin() + s.size() /2);
    }
    if(s!= string(s.size() ,s[0]))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
