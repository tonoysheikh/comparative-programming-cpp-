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
        int cnt = 0;
        for(int i = 0;i < s.size();i++)
        {
            if((s[i] == 'x' && s[i+1] == 'y') ||(s[i] == 'y' && s[i+1] == 'x'))
                {
                    cnt++;
                    i++;
                }

        }
        cout << cnt << "\n";

    }

    return 0;
}
