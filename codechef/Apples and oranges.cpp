#include<bits/stdc++.h>
using namespace std;
#define n "\n";
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b;
        cin >> a >> b;
        cout << __gcd(a,b) << n;
    }


    return 0;
}
