#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
        if(a >= b)
            cout << 0 << endl;
        else
        {
            while(a< b)
            {
                a+=8;
                cnt++;
            }
             cout << cnt << endl;
             cnt = 0;
        }

    }


    return 0;
}









