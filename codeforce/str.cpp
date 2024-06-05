#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    int on = 0;
    int ze = 0;
    for(int i = 0; i < s.size();i++)
    {
        if(s[i] == '1')
        on++;
        else
        ze++;

    }
    if(on != ze)
    {
        cout << 1 << "\n";
        cout << s << "\n";
    }
    else
    {
        cout << 2 << "\n";
        cout << s[0] << " ";
        for(int i =1;i < len;i++)
        {
            cout << s[i];
        }
        cout << "\n";
    }

    return 0;
}