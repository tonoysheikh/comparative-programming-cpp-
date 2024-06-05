#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        string leftshift , rightshift;
        leftshift = s.substr(1,s.size()) + s.substr(0,1);
        rightshift = s.substr(s.size() - 1, s.size()) + s.substr(0,s.size() - 1);

        if(leftshift == rightshift)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
