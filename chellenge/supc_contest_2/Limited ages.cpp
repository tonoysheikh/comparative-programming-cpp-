#include<iostream>
using namespace std;
#define n '\n';
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x , y , a;
        cin >> x >>y>>a;
        if(a >= x && y > a)
        {
            cout << "YES" << n;
        }
        else
            cout << "NO" << n;
    }

    return 0;
}
