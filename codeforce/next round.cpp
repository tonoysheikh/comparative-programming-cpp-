#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int b, c, cnt = 0;
    cin >> b >> c;
    for(int i = 1 ; i <= b; i++)
    {
        cin >> a[i];
    }
    for(int i = 1 ; i <= b; i++)
    {
        if(a[i] > 0 && a[i] >= a[c] )
        {
            cnt++;
        }
    }
    cout << cnt;



    return 0;
}

