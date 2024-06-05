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



void solve()
{
    string s;
    cin >> s;

    string given = "codechef";
    int m = 0;
    for(int i = 0; i < s.size() - 1;i++)
    {
        if(s[i] == s[i+ 1])
        {
            m++;
            if(m == 7)
            {
                cout << -1 << nl;
            }
        }
        else
        {
            break;
        }
    }

    int cnt = 0;
    for(int i = 0; i < s.size();i++)
    {
        if(s[i] != given[i])
        {
            cnt++;
            if(cnt == 8)
            {
                cout << s << endl;
            }
        }
        else
        {
            break;
        }
    }

    int num = 0;
    while(next_permutation(s.begin(),s.end()))
    {
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == given[i])
            {
                break;
            }
            else
            {
                num++;
                if(num == 8)
                {
                    cout << s << nl;
                }

            }
        }
    }
            




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