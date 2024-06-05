#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define nl '\n'
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define pi 3.1415926535897932384626433832795

void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
void solve()
{
    int len;
    cin >> len;
    int a[len];
    for(int i = 0;i < len;i++)
    {
        cin >> a[i];
    }
    sort(a , a + len);
    int c = len;

    int count = 0, flag = 0;
        for (int i = len - 1; i >= 0; i--)
        {
            if (a[i] > c)
            {
                flag = 1;
            }
            else if (a[i] < c)
            {
                count += c - a[i];
            }
            c = c - 1;
        }
        if (flag == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }    
        

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
