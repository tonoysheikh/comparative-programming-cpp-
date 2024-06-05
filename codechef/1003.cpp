#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int maxt,maxn, sumn,x;
        cin>>maxt>>maxn>>sumn;
        int ans=0;
        while(1)
        {
            x=min(maxn,sumn);
            ans=ans+(maxn*maxn);
            sumn-=x;
            if(sumn==0)
            {
                cout<<ans<<endl;
                break;
            }
        }


    }
    
}
