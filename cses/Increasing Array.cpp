#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    long long int a[t];
    for(int i = 0;i < t;i++)
    {
        cin >> a[i];
    }
    long long int cnt = 0;
    for(int i = 1;i < t;i++)
    {
        if (a[i] < a[i - 1]) {
            cnt += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }
    cout << cnt;

    return 0;
}
