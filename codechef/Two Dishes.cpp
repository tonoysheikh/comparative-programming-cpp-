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
    int n , a , b ,c;
    cin >> n >> a >>b >> c;
    int first_disk = min(a,b);
    b = b - first_disk;
    int second_disk = min(b , c);
    int final_disk = first_disk + second_disk;
    if(final_disk >= n)
    yes();
    else
    no();

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
