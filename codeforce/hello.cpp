#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        int result =  int(s[len - 1]);
        cout << result - 96 << endl;
    }

    return 0;
}