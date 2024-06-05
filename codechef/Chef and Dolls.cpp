#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n];
        int c;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]==a[i+1])
            {
                i++;
            }
            else
            {
                c=a[i];
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
