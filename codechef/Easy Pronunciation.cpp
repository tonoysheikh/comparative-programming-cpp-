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
      bool res = true;
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
                 res = false;
                 break;
             }

      }
      if(res)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;

    }

    return 0;
}





