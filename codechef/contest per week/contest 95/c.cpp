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
        string  a[len];
        for(int i = 0;i<len;i++)
        {
            cin >> a[i];
        }
        string s = "AB";
        int cnt = 0;
        int max = 0;
        sort(a,a+len);
        for(int i = 0;i<len;i++)
        {
            cnt = 0;
            for(int j = 0;j <len;j++)
            {


                if((a[i] == "A" && a[j] == "A") ||(a[i] == "A" && a[j] == s) )
                    cnt++;
                 else if((a[i] == "B" && a[j] == "B") ||(a[i] == "B" && a[j] == s) )
                    cnt++;
                     else if((a[i] == "O" && a[j] == "A") ||(a[i] == "O" && a[j] == "B") || (a[i] == "O" && a[j] == s) )
                    cnt++;
                     else if((a[i] == s && a[j] == s))
                    cnt++;


            }
            if(max <= cnt )
                    {
                        max = cnt;
                    }
        }
        cout << max << endl;
    }

    return 0;
}
