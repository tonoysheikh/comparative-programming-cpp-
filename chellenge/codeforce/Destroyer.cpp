#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t , n;
    cin >> t;
    while(t--)
    {
         cin>>n;
        int f=1,x;
        long long int  ar[101]= {0};
        for(int i=0; i<n; i++)
        {
            cin>>x;
            ar[x]++;
        }

        for(int i=1; i<100; i++)
        {
            if(ar[i]>ar[i-1])
                f=0;
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


return 0;
}
