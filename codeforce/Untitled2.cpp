
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
        int a , b , c;
        cin >> a >> b >> c;

        double avg = (double)(a+b)/2;

       if(avg > c)
       {
           cout << "YES\n";
       }
       else
       {
           cout << "NO\n";
       }
   }


    return 0;
}


