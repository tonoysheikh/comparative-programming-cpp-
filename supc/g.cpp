#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<string ,int>m;
    for(int i  =0;i < t;i++)
    {
        string s;
        cin >> s;
        m[s]++;

        if(m[s] == 1)
        {
            cout << "OK\n";
        }
        else
        {
            cout << s << m[s]-1 <<"\n";
        }

    }





    return 0;
}

