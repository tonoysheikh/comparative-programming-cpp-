#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    int res = 0;
    while(t--)
    {
        string s;
        cin >> s;
        if(s[1] == '+')
            res +=1;
        else if(s[1] == '-')
            res -= 1;

    }
    cout << res << endl;

    return 0;
}
