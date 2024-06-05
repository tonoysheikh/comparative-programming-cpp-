#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len, val;
    cin >> len >> val;
    string s;
    cin >> s;

    for(int i = 0; i < len; i++)
    {
        if( s[i] - '0' >= val)
        {
            cout << s[i];

        }
        else
        {
            cout << val;
            for(int j = i; j < len; j++)
            {
                cout << s[j];
            }
            cout << "\n";
            return ;

        }

    }
    cout << val << "\n";


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


