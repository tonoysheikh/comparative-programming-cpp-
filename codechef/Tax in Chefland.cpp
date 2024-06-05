#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        if(a <= 100)
            cout << a << endl;
        else
            cout << a - 10 << endl;
    }

    return 0;
}
