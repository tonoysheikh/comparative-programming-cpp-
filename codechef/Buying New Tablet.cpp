#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n , b;
    cin >> n >> b;
    int mx =0;
    for(int i = 0;i < n;i++)
    {
        int w,h,p;
        cin >> w>>h>>p;

        if(p <= b)
        {
            int a = w * h;
            if(mx <= a)
            {
                mx = a;
            }

        }
    
    }
    //cout << mx << "\n";
    if(mx == 0)
        cout << "no tablet\n";
    else
    cout << mx << "\n";

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