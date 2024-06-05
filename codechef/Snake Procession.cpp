#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int len;
        cin >>len;
        string s;
        cin>>s;
        string a;
        for(int i = 0; i < len; i++)
        {
            if(s[i] != '.')
                a+=s[i];
        }
        bool res = true;
        if(a.size() % 2 != 0 || a[0] == 'T')
        {
            res = false;
        }
        else
        {
            for(int i = 0; i < a.size(); i++)
            {
                if(i % 2 == 0)
                {
                    if(a[i] == 'T')
                        res = false;
                }
                else{
                    if(a[i] == 'H')
                        res = false;
                }
            }
        }
        if(res)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;

    }

    return 0;
}
