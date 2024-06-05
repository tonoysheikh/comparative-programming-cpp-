#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    int zero = 0,one=0;
    for(int i = 0;i < len;i++)
    {
        if(s[i] == 'z')
            zero++;
        else if(s[i] == 'n')
            one++;
    }
    for(int i = 0;i <one;i++)
        cout << 1 << " ";
    for(int i = 0;i < zero;i++)
        cout << 0 << " ";

    cout << "\n";
}
