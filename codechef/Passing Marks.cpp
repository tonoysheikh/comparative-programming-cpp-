#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int len , b;
        cin >> len >> b;
        int arr[len];
        for(int i = 0;i < len;i++)
            cin >> arr[i];
        sort(arr,arr+len);

        cout << arr[len -  b] - 1<< "\n";


    }
    return 0;
}
