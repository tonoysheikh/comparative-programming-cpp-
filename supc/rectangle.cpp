#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    int Case = 1;
    while(t--)
    {
        ll n;
        ll rec = 0;
        cin >> n;
        while(1)
        {
            ll x;
            cin >> x;
            rec = max(rec,x*n);
            n--;
        }
        cout << "Case " << Case++ << ": " ;
        cout << rec << "\n";
    }
    return 0;
}
