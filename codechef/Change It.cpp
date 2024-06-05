#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int len;
        cin>>len;
        int a[len];
        int cnt = 0;
        for(int i = 0; i<len; i++)
            cin >> a[i];
        int count=0,sum=0;
        for(int i=0; i<len; i++)
        {
            for(int j=i; j<len; j++)
            {
                if(a[i]==a[j]) count++;
            }
            sum=max(sum,count);
            count=0;
        }
        cout<<len-sum<<endl;
    }



return 0;
}
