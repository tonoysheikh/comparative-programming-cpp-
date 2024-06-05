#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int len = 3;
        int a[len];
        for(int i = 0;i < len;i++)
        {
            cin >> a[i];
        }
        sort(a,a+len);
        if(a[0] + a[1] == a[2])
            cout << "YES\n";
        else
            cout << "NO\n";

    }
}
