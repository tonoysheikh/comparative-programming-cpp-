#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i]>=33&&s[i]<=126)
        {
            if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' )
            {
                cnt = 1;
            }

        }
    }
    if(cnt == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
