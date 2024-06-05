#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b , c , d;
    cin >> a >> b >> c >> d;

    int s1 = pow(a , b);
    int s2 = pow(c , d);

    if(s1 > s2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;

}

