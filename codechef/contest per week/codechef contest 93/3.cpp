#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, a, res, b, r;
        cin >> n >> m;
        int cnt = 0;
        if(n == m)
            {
                cout << "YES" << endl;
                break;
            }
        else
        {
            for(int i = 1;i<=n;i++)
            {
                a = n - i;// 3
                res = m + 1 * i;
                if(a == res)
                cnt++;
            }
            for(int i = 1;i<=m;i++)
            {
                 b = m - i;// 4
            r = n + 3 * i;
            if(b == r)
                cnt++ ;
            }

        }

        if(cnt >= 1)
            cout << "YES\n";
        else
            cout << "NO\n";

    }



return 0;
}
