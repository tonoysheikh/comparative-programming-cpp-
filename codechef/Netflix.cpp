#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b , c, d;
        cin >> a >> b >> c >> d;
        bool res = false;
        if((a + b) >= d)
            res = true;
        else if((a + c) >= d)
            res = true;
        else if((b + c) >= d)
        res = true;

        if(res)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}
