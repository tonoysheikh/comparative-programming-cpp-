#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int len;cin>>len;
    int sum = 0;
    for(int i = 0;i<len;i++)
    {
        int v;cin>>v;
        sum += v;
    }
    if(sum % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    }

    return 0;
}
