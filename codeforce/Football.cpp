#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 1;
    int f = 0;
    for(int i =0; i<s.size(); i++)
    {
        if(s[i] == s[i+1]  )
        {
            cnt++;
            if(cnt == 7)
            {
                f++;
                break;
            }
        }
        else
        {
            cnt = 1;
        }
    }
    if( f == 1)
    {
        cout << "YES\n";

    }
    else
    {
        cout << "NO\n";
    }


    return 0;
}
