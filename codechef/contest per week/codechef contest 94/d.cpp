#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
        int arr[a];
        int ar[a];
        for(int i = 0;i<a;i++)
        {
            cin >> arr[i];
        }
        int j =0;
        for(int i = 0;i<a;i++)
        {
            if(arr[i] > b)
            {
                ar[j] = arr[i];
                j++;
            }
        }
        int res[j];
        int cnt = 0;
        for(int i = 0;i<j;i++)
        {
            res[i] = ar[i] & ar[i+ 1];
             if(res[i] == b)
                cnt++;
                else
                    continue;
        }




            if(cnt >= 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;





    }

    return 0;

}

