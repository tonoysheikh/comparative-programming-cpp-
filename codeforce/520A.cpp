
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,n;
    cin >> s;
    for(int i = 0;i<s.size();i++)
    {
        n[i] = toupper(s[i]);
        //cout << n[i];

    }
    sort(n.begin(),n.end());

    for(int i = 0;i < s.size();i++)
    {
        cout << n[i];
    }
    cout << "\n";


    return 0;
}

