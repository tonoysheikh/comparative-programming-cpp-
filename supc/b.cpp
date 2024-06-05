#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int res = 0;
    while(a != 0 && b != 0)
    {
        int m1 = a%10;
        int m2 = b%10;
        a = a/10;
        b = b/10;
        if(m1 + m2 > 9)
        {
            res++;
            break;
        }


    }
    if(res > 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }



    return 0;
}
