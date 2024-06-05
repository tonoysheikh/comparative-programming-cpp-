#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n , m;
    cin >> n >> m;
    int x , y;
    cin >> x >> y;
    for(int i = 0; i < n;i++)
    {
        string s;
        cin >> s;
        int f = 0 , u = 0, p = 0;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == 'F')
            {
                f++;
            }
            else if(s[i] == 'U')
            {
                u++;
            }
            else
            {
                p++;
            }

        }
        
        if((f >= x) || (f == x-1 && p >= y))
        cout << 1;
        else
        cout << 0;
        
    }
    cout << "\n";


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