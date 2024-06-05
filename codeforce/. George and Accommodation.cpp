#include<iostream>
using  namespace std;
int main()
{
    int t;
    cin >> t;
    int a[1000] , b[1000];
    int cnt = 0;
    for(int i =0;i<t;i++)
    {
        cin >> a[i] >> b[i];

    }
    for(int i = 0; i < t;i++)
    {
        for(int j = 0;j <t;j++)
        {
            if(a[i] != b[j])
            {
                cnt++;
            }
            else
                continue;
        }
    }
    if(cnt == 0 )
    {
        cout << 0 << endl;
    }
    else
        cout << cnt << endl;


    return 0;
}
