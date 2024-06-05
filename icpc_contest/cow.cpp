#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int c = 1;
    while(t--)
    {
        cout << "Case " << c++ << ":" << endl;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int n ;
        cin >> n;
        while(n--)
        {
            int x, y;
            cin >> x >> y;
            if((x >= a && x <= c) && (y >= b && y <= d) )
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
