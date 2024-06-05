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
        if(a >= 67 && a <= 45000)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

