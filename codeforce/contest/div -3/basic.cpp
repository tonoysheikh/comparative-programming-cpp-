#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int len;
        cin >> len;
        long long int a[len];

        for(int i = 0;i < len ;i++)
            cin >> a[i];
        sort(a,a+len);
        int cnt  = 0;
        for(int i = 0;i < len/2;i++)
        {
            cnt += abs(a[i] - a[len-i-1]);
        }
        cout << cnt << "\n";


    }


    return 0;
}
