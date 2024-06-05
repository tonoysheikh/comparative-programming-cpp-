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
    map<char,int>mp;
    for(int i = 0;i < s.size();i++)
    {
        mp[s[i]]++;
    }

    int m = 1;
    char res;
    for(auto it:mp)
    {
        if(it.second > m)
        {
            m = it.second;
            res = it.first;
        }
    }
    //cout << m << endl;
    cout << res << endl;


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}