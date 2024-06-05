#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>> t;
    while(t--)
    {
        int a , b;
        cin >> a >> b;
        int easy = b/2;
        int hard = b/10;
        int arr[a];
        int e = 0;
        int hd = 0;
        for(int i = 0;i<a;i++)
            cin >> arr[i];

        for(int i = 0;i<a;i++)
        {
            if(arr[i] >= easy)
                e++;
            else if(arr[i] <= hard)
                hd++;
        }
        if(hd == 2 && e == 1)
        cout << "yes" << endl;
        else
            cout << "no" << endl;



    }

    return 0;
}



