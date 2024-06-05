#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;

         int res =  a*b;
         if(res < 10000)
            cout << "NO\n";
         else
         {
             int cnt = res / 10000;
         if(cnt < 10)
            cout << "YES\n";
         else
            cout << "NO\n";
         }


    }

    return 0;
}
