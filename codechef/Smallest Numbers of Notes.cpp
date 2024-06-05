#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin >> n;
        int sum = 0;
        int cnt = 0;
        int mod = 0;
        while(n > 0)
        {
            if(n >= 100)
            {
                sum = n / 100;
                mod = n % 100;
                cnt += sum;
            }
            else if(n >= 50)
            {
                sum = mod /50;
                mod = mod % 50;
                cnt += sum;
            }
            else if(n >= 10)
            {
                sum = mod /10;
                mod = mod % 10;
                cnt += sum;
            }
            else if(n >= 5)
            {
                sum = mod /5;
                mod = mod % 5;
                cnt += sum;
            }
            else if(n >= 2)
            {
                sum = mod /2;
                mod = mod % 2;
                cnt += sum;
            }
            else if(n >= 1)
            {
                sum = mod /1;
                mod = mod % 1;
                cnt += sum;
            }


        }
        cout << cnt << endl;


    }

    return 0;
}
