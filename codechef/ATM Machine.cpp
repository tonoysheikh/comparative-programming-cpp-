#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n , k , m;cin >> n >> k;
        for(int i = 0;i < n;i++)
        {
            cin >> m;
            if(k >= m)
            {
                cout << 1;
                k -= m;
            }

            else
            {
                cout << 0 ;
            }
        }
        cout << endl;

    }

    return 0;
}




