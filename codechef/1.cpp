#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      int len;
      cin >> len;
      string s;
      cin >> s;
      int cnt = 0;
      int res = 0;
      for(int i = 0;i < len;i++)
      {

          if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' )
            {
                    cnt++;
            }
            else
                cnt = 0;

             if(cnt >= 4)
             {
                 res = 1;
                 break;
             }

      }
      if(res == 0)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;

    }

    return 0;
}





