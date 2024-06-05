#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string n;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '.')
            break;

        else
            n += s[i];
    }

    cout << n << "\n";

    return 0;
}
