#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cin >>len;
    string s;
    cin >> s;
    int an = 0;
    int de = 0;
    for(int i = 0;i < len;i++)
    {
        if(s[i] == 'A')
            an++;
        else if(s[i] == 'D')
            de++;
    }
    if(an > de)
        cout << "Anton\n";
    else if(an < de)
        cout << "Danik\n";
    else
        cout << "Friendship\n";
}
