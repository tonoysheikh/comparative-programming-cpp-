#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isprime(int num)
{
    if(num < 2)return false;
    if(num == 2)return true;
    if(num % 2 == 0)return false;
    for(int i = 3;i * i  <= num;i += 2)
        if(num % i == 0)return false;
    return true;      
}
int main()
{
    ll t;
    cin >> t;
    ll a , b;
    while(t--)
    {
        cin >> a >> b;
        for(int i = a; i <= b;i++)
        {
            if(isprime(i))
            {
                cout << i << endl;
            }
        }
    
    }

    return 0;
}