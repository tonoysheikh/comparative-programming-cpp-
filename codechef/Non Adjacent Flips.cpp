#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define pi 3.1415926535897932384626433832795

void yes()
{
    cout<<"YES\n";
}
void no()
{
    cout<<"NO\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char s[n];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }


        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                if(i==n-1)
                {
                    cnt=1;
                }
                else if(s[i+1]=='1')
                {
                    cnt = 2;
                    break;
                }
                cnt =1;
            }
        }

        if(cnt==2)
            cout<<2<<endl;
        else if(cnt==1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}

