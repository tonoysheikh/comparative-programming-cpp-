#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define nl '\n' 
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415926535897932384626433832795
#define lpz(i, a, b) for (int i=a; i<b; i++)
#define lp(i, a, b) for (int i=a; i<=b; i++)
#define test() int t; cin>>t; while(t--)
#define ull unsigned long long



void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int result = 0;
    int len = 0;
    for (int i = 0; i < 2 * n; i++) {
        if (v[i % n] == 1) {
            len++;
            result = max(result, len);
        } else {
            len = 0;
        }
    }
    cout << result << endl;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}