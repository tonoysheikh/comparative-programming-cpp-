#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int len;
        cin >> len;

       long long  int a[len];
       long long int b[len];

        for(int i = 0; i<len; i++)
            cin>>a[i];

        for(int j = 0 ; j<len; j++)
            cin >> b[j];

        long long int cnt = 0;
        long long int max = 0;

        for(int i = 0; i<len; i++)
        {
            if(a[i] != 0)
                {
                    cnt++;

                }


            else
               {

                    if(max <= cnt)
                   {
                        max = cnt;

                   }
                    cnt = 0;
                    continue;
               }

        }


        long long int c = 0;
        long long int m = 0;
        for(int j = 0; j<len; j++)
        {
            if(b[j] != 0)
                c++;
            else
            {
                if(m <= c)
               {
                    m = c;
               }
                 c = 0;
                 continue;
            }


        }
        if(max == m)
            cout << "Draw" << endl;
        else if(max > m)
            cout << "Om" << endl;
        else
            cout << "Addy" << endl;



    }

    return 0;

}

