#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100000];
    int len,p;cin >>len>>p;
    for(int i =0;i<len;i++)
    {
        cin >> a[i];
    }
    int temp = a[p];
    int cnt = 0;
     for(int i =0;i<len;i++)
    {
        if(a[i] >= temp)cnt++;
    }
    cout << cnt << endl;

    return 0;
}
