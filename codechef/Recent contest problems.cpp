#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    int s = 0 , l = 0;
    for(int i = 0; i < len;i++)
    {
        string x;
        cin >> x;

        if(x == "START38")
            s++;
        else
            l++;
    }
    cout << s << " " << l << "\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
