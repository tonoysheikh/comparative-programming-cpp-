#include<bits/stdc++.h>
using namespace std;

#define nl '\n' 



void solve()
{
    double x , y;
    cin >> x >> y;

    while(1)
    {
        double z = (x + y)/2.0;

        double a = pow(x , 3) - x - 6;
        double b = pow(y , 3) - y - 6;
        double c = pow(z , 3) - z - 6;

        if(c <= 0.00)
        {
            cout << z << nl;
            return;
        }

        if((c < 0 and b < 0) || (c >= 0 and b >= 0))
        {
            y = z;
        }
        else if((c < 0 and a < 0) || (c >= 0 and a >= 0))
        {
            x = z;
        }
    }


}

int main()
{
    solve();

    return 0;
}










