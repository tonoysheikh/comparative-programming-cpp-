#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while(t--)
    {
        int len;
        cin >> len ;
        string a;
        cin >> a;
        int cnt = 0;
        for(int i = 0;i <len;i++)
        {
            if(a[i] != a[i+1])
                {
                    cnt += 2;

                }
                 i++;

        }
        cout << cnt + 1 << endl;


    }


    return 0;
}











