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
    string s;
    cin >> s;
    
    string one = 'a' + s;
    string two = s + 'a';

    string oner = one;
    reverse(one.begin() , one.end());

    for(int i = 0;i < one.size();i++)
    {
        if(one[i] != oner[i])
        {
            cout << "YES\n";
            cout << oner << nl;
            return;
        }else
        {
            continue;
        }
    }

    string twor = two;

    reverse(two.begin() , two.end());

    for(int i = 0;i < two.size();i++)
    {
        if(two[i] != twor[i])
        {
            cout << "YES\n";
            cout << twor << nl;
            return;
        }else
        {
            continue;
        }
    }

    cout << "NO\n";



}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    test(){
    solve();
    }
    //solve();

    return 0;
}