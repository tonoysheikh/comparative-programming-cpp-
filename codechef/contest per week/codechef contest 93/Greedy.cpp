#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;
        for(int i = 0;i<s.size();i++)
        {
            if(i % 2 == 0)
            {
                while(s[i] == s[i+1])
                {
                    cout << '(' ;

                }
                if(s[i] != s[i+1])
                {
                    cout << '(' ;
                }
            }
            else
            {
                while(s[i] == s[i+1])
                {
                    cout << ')' ;
                }
                if(s[i] != s[i+1])
                {
                    cout << ')';
                }

            }
        }
        cout << endl;

    }

    return 0;
}

