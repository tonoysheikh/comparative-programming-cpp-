#include<bits/stdc++.h>
using namespace std;
void primeFactor(int n)
{
    int cnt = 0;
    for(int i =2;i * i <= n;i++)
        {

            if(n%i == 0)
            {
                cnt++;
                while(n%i == 0)
                {
                    n/=i;
                }
            }
        }
        if(n > 1)
            cnt++;
        cout << cnt << "\n";
}
int main()
{
    int n;
    cin >> n;
    while(cin >> n)
    {
        if(n == 0)
            break;
        cout << n << " : ";
        primeFactor(n);

    }

    return 0;
}
