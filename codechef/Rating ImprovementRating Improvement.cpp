#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
        int def = 0;
        if(a < b)
        {
            def = b - a;
            if(def <= 200)
                cout << "YES\n";
                else
                    cout << "NO\n";
        }
        else if( a == b)

            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}






