#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a>> b;
        int arr[a];
         int rem = 0 ,point =0;
        for(int i = 0;i < a;i++)
            cin >> arr[i];


        for(int i = 0;i<a;i++)
        {
          if(rem + arr[i] >= b)
          {
              rem += arr[i] - b;
          }
          else if(point == 0)
          {
              point = i + 1;
          }
        }
        if(point > 0)
            cout << "NO" << point  << "\n";
            else
                cout << "YES" << "\n";

    }

    return 0;
}
