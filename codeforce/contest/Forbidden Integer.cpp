#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n , k ,x;
        cin >> n >> k >> x;
        int ans = 0;
        if(x!= 1)
        {
            cout << "YES\n";
            cout << n << "\n";
            while(n--)
            {
                cout << 1 << " ";
            }
            cout << "\n";
            return ;
        }
        if(k == 1)
        {
            if(x == 1)
            {
                cout << "NO\n";
                return ;
            }
        }
        if(n < 2)
        {
            cout << "NO\n";
            return ;
        }
        if(k == 2)
        {
            if(n & 1)
            {
                cout << "NO\n";
                return ;
            }
            else
            {
                cout << "YES\n";
                cout << n/2 << "\n";
                for(int i = 1;i <=n/2;i++)
                {
                    cout << 2 << " ";
                }
                cout << "\n";
                return ;
            }
        }
        cout << "YES\n";
        if(n%2 == 0)
        {
            cout << n/2 << "\n";
            for(int i = 1;i <= n/2;i++)
                cout << 2 << " ";
            cout << "\n";
            return ;
        }
        else
        {
            cout << (n-3)/2 + 1 << "\n";
            cout << 3 << " ";
            n -= 3;
            for(int i = 1;i <= n/2;i++)
            {
                cout << 2 << " ";
            }
            cout << "\n";
            return ;

        }

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        sol();

    }

    return 0;
}
