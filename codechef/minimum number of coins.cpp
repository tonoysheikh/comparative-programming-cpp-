#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x;
    cin >> x;
    if(x<10)
    {
      cout << -1 << endl;
    }
    else
    {
      int a = x/10;
      int b = x/5;
      if(x%10 == 0)
      {
        cout << a << endl;
      }
      else
      {
        cout<< a+1 << endl;
      }
      if(x%5 == 0)
      {
        cout << b << endl;
      }
      else
      {
        cout << b+1 << endl;
      }

    }
  }
  return 0;
}
