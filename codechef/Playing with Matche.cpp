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
    int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int a , b;
    cin >> a >> b;
    int sum = a + b;

    string change = to_string(sum);
    int result = 0;
    for(int i = 0; i < change.size();i++)
    {
        int num = change[i] - '0';
        result += arr[num];

    }
    cout << result << nl;

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
