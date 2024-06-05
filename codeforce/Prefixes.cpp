#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i =0;i < len;i += 2)
    {
        if(s[i] == 'b' && s[i+1] == 'b')
        {
            s[i] = 'a';
            cnt++;
        }
        else if(s[i] == 'a' && s[i+1] == 'a')
        {
            s[i + 1] = 'b';
            cnt++; 
        }
            
    }

    cout << cnt << endl;
    cout << s << endl;

    return 0;
}