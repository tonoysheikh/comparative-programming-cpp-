#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b ;
        cin >> a >> b;

        int sum = b * 30;

        if(a >= sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


    }

    return 0;
}

