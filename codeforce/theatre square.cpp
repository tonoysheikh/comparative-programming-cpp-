#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n , m , a , ans1 , ans2;

    cin >> n >> m >> a;

    if(n == a && m == a || n < a || m < a)
    {
        cout << 1 << endl;
    }
    else if(n == a)
    {
        cout << m << endl;
    }
    else if( m == a)
    {
        cout << n << endl;
    }
    else if(a == 1)
    {
        cout << n * m << endl;
    }
    else
    {
        if(n % a == 0)
    {
        ans1 = n/a;
    }
    else
    {
        ans1 = n/a + 1;
    }
    if(m % a == 0)
    {
        ans2 = m/a;
    }
    else
    {
        ans2 = m/a + 1;
    }

    cout << ans1 * ans2 << endl;
    }
    return 0;

}
