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

void solution(const vector<int>&v , int len , int sum)
{
    lpz(i , 0 , len)
    {
        int pick = v[i];

        if(pick == sum)
        {
            cout << i << nl;
        }
        else
        {
            lpz(j , i+ 1 , len)
            {
                pick += v[j];

                if(pick == sum)
                {
                    cout << i << " " << j << nl;
                    return;
                }
            }
        }
    }
    cout << "Not found\n";
    return;
}

void solve()
{
    int len , sum;
    cin >> len >> sum;
    vector<int>v;
    lpz(i,0,len)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    solution(v , len , sum);


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