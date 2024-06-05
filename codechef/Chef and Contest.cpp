
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x , y, p ,q;
    cin >> x >> y>>p>>q;
    int chef = x + p * 10;
    int cf = y + q * 10;

    if(chef < cf)
        cout << "Chef\n";
    else if(chef > cf)
        cout << "Chefina\n";
    else
        cout << "Draw\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
