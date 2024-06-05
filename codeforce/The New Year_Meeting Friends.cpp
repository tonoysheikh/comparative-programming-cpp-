#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b , c;cin>>a >>b>>c;
    int max = 0;

    int m1 = abs(a-b);
    int m2 = abs(b-c);
    int m3 = abs(c-a);

    if(m1 > m2 && m1 > m3)
        max = m1;
    else if(m2 > m1 && m2 > m3)
        max = m2;
    else
        max = m3;

    cout << max << endl;


    return 0;
}
