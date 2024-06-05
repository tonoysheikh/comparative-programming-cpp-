#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
        int len;
        cin>> len;
        string s;
        cin >> s;
        if(len % 2 == 0)
        {
            for(int i = 0;i < len;i++)
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
        else
        {
             for(int i = 0;i < len - 1;i++)
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
        string n;
        int temp;
        for(int i = 0;i <len;i++)
        {
            s[i] = s[i] - 'a';
            char ch =  (char)'z' - s[i];
            cout << ch;

        }
        cout << "\n";

   }

    return 0;
}
