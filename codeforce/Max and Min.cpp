#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
    int a , b ,c;
    cin >> a >> b >> c;

    int maxNumber;
   int minNumber;

   if(a >= b && a >= c)
    maxNumber = a;
   else if(b >= c && b >= a)
    maxNumber = b;
   else
    maxNumber = c;

     if(a <= b && a <= c)
    minNumber = a;
   else if(b <= c && b <= a)
    minNumber = b;
   else
    minNumber = c;

    cout << minNumber << " " << maxNumber << endl;

    return 0;
}
