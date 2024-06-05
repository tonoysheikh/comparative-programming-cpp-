
#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int p, m,v;
   cin >> p >> m >> v;

   cout << v*(m-(p-1)) << "\n";
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

