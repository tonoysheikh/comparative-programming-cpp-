#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n % 3 == 0)
        cout << n/3 << " " << n/3 << " " << n/3 << "\n";
    else
    {
        int res = n/3;
        int d = res + res;
        cout << res << " " << res << " " << n - d << "\n";
    }
    return 0;
}
