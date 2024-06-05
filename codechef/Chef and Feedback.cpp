#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        int cnt = 0;
        string s;cin>>s;
        for(int i =0;i<s.size();i++)
        {
            if(s[i] == s[i+1])
                cnt =  1;
        }
        if(cnt == 1)
            cout << "Bad" << endl;
        else
            cout << "Good" << endl;
    }
}
