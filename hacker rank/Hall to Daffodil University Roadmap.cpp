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

        reverse(s.begin(),s.end());

        string result;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == 'R')
                result += 'L';
            else if(s[i] == 'L')
                result += 'R';
            else
                result += s[i];
        }

        cout << result << "\n";
    }

    return 0;
}
