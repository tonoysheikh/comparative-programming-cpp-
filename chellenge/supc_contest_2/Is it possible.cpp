#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int f;
        cin >> f;
        if(f >= 65 && f <= 45000)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
