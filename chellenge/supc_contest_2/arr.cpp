#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len = 5;
    int a[len];
    for(int i = 0;i<len;i++)
    {
        cin >> a[i];
    }
    sort(a, a+len);
    for(int i = 0;i<len;i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

