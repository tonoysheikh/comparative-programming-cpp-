#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a , b , c;cin >> a >> b >> c;
        if(a < b && a < c)cout << "Draw" << endl;
        else if(b < c && b < a) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }


    return 0;
}
