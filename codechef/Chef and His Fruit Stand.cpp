#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a , b;cin >> a >> b;
        int x = a/2;
        cout << min(x,b) << endl;
    }

    return 0;
}

