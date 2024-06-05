#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b ,c;
        cin >> a >> b >> c;

        int sum = a + c;

        if(b >= sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


    }

    return 0;
}


