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
    string temp = s;
    reverse(s.begin(),s.end());
    if(s == temp)
        cout << "wins" << endl;
    else
        cout << "loses" << endl;
    }

    return 0;
}

