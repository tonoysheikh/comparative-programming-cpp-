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
        int res = abs(a - b);
        if(res % 2 == 0)
        cout << "YES\n";
        else
        cout << "NO\n";
    }

    return 0;
}