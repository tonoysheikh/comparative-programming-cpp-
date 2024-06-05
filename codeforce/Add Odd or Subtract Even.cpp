#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int a,b;
        int ans = 0;
        int def = 0;
        cin >> a >> b;
        if(a == b)
        {
            cout << 0 << endl;
        }
        else if(a>b && (a - b) %2 == 0)// 7 - 4 = 3
        {
            cout << 1 << endl;

        }
        else if(a < b && (b - a) % 2 != 0)
        {

            cout << 1 << endl;

        }
        else
        {
            cout << 2 << endl;
        }

    }




    return 0;
}
