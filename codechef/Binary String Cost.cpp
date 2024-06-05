#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int len, x, y;
        cin >> len >> x >> y;
        string s;
        cin >> s;
        int cnt = 0;
        int cn = 0;

        for(int i =0; i<len; i++)
        {
            if(s[i] == '1' && s[i+ 1] == '0')
            {
                cnt++;
            }
            if(s[i] == '0' && s[i+ 1] == '1')
            {
                cn++;
            }

        }
        if(cnt ==  0 || cn == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << min(x , y) << endl;
        }


    }




return 0;
}

