#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total;
    cin >> total;
    int len = 4;
    int a[len];
    int sum = 0;
    for(int i = 0;i < len - 1;i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << total - sum << "\n";
    return 0;
}
