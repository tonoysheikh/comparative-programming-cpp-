#include<iostream>
using namespace std;
int main()
{
   char ch;
   int cnt;
   while(scanf("%c",&ch) == 1)
   {
       cnt = 0;
       if(ch == ' " ')
       {
           cnt++;
           if(cnt % 2)cout << " ' ' ";
           else
            cout <<  " ' ' ";
       }
       else
        cout << ch;
   }

    return 0;
}
