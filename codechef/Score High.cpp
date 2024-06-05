#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int len;
        cin>> len;
        int a , b , c , d;
        cin >> a >> b >> c >> d;
        cout << max({a,b,c,d}) << endl;
    }

    return 0;
}
