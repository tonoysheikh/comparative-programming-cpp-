#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int len;
        cin>>len;
        int a[len];
        for(int i = 0;i<len;i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
         for(int i = 0;i<len;i++)
        {
            if(a[i] >= 1000)
                cnt++;
        }
        cout << cnt << endl;


    }

    return 0;
}
