#include<bits/stdc++.h>
using namespace std;
int bex(int base, int power, int mod)
{
    int result = 1;
    while(power)
    {
        if(power % 2 == 1)
        {
            result = (result * base) % mod;
            power--;
        }
        else
        {
            base = (base * base) % mod;
            power /= 2;
        }
    }
    return result;
}
int main()
{

    long long int n;
    cin >> n;
    cout <<  bex(1378, n, 10) << "\n";


    return 0;
}
