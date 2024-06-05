#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int d = 0;
 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            d = __gcd(abs(a[i] - (i + 1)), d);
        }
        cout << d << endl;
    }
    return 0;
}