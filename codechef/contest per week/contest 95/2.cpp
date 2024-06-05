
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n <= 3)
            cout << "BRONZE" << "\n";
        else if(n > 6)
            cout << "GOLD" << "\n";
        else
            cout << "SILVER" << "\n";
    }

    return 0;
}
