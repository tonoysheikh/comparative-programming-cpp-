#include<bits/stdc++.h>
using namespace std;

int main()
{
   map<string,int>m;
    int len;
    cin >> len;
   for(int i = 0;i < len;i++)
   {
       string s;
       cin >> s;
       m[s]++;

       if(m[s] == 1)
       {
           cout << "NO\n";
       }
       else
       {
           cout << "YES\n";
       }
   }



    return 0;
}



