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



string solve(string a)
{
    string given = "codechef";

    if(given.size() != a.size())
    {
        return "-1";
    }

    for(int k = 0; k < a.size();k++)
    {
        if(a[k] == given[k])
        {
            for(int j = 0; j < a.size();j++)
            {
                if(a[j] != given[k]  && a[k] != given[j])
                {
                    swap(a[k] , a[j]);
                    break;
                }
            }
            if(a[k] == given[k])
            {
                return "-1";
            }
        }
    }

    return a;
    



}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    test(){
        string a;
        cin >> a;
        cout << solve(a) << nl;
    }
    //solve();

    return 0;
}