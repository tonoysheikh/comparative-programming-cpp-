#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while(t--)
    {
       string a;
       cin >> a;
       bool res = false;
       for(int i = 0 ;i < a.size();i++)
       {
           if(a[i] == '7')
           {
               res = true;
               break;
           }
           else
            continue;
       }
       if(res)
       {
           cout << "YES\n";
       }
       else
        cout << "NO\n";

    }


    return 0;
}










