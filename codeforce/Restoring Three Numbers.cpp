#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len = 4;
    int a[len];
    for(int i = 0;i < len;i++)
        cin >> a[i];
    sort(a , a + len);

            int c = a[3] - a[0];
            int aa = a[3] - a[2];
            int b = a[3] - a[1];

            cout << aa << " " << b << " " <<  c << endl;



    return 0;
}
