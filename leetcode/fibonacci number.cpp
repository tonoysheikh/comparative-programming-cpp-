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



int solve(int n)
{

    if(n == 0)return 0;
    if(n == 1)return 1;
    int res = solve(n-1) + solve(n-2);
    return res;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    test()
    {
        int n;
        cin >> n;
        int result = solve(n);
        cout << result << nl;
    }

    return 0;
}