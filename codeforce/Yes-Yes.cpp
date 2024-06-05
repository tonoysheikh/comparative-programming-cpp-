#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int len = s.size();

    if(len <= 1)
    {
         if( (s[0] == 'Y' || s[0] == 'e' || s[0] == 's') )
        {
            cout << "YES\n";

        }
        else
        {
            cout << "NO\n";

        }
        return ;
    }

    bool result =  true;
    for(int i = 0;i < s.size()-1;i++)
    {

        if(s[i] == 'Y'  && s[i+1] == 'e')
            continue;
        else if(s[i] == 'e'  && s[i+1] == 's')
            continue;
            else if(s[i] == 's'  && s[i+1] == 'y')
            continue;
             else
                {
                    cout << "NO\n";
                    return;
                }

    }
    cout << "YES\n";


}


int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        solve();
    }
}



