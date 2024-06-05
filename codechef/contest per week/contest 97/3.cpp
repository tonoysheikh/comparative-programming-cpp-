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
    int len,q;
    cin >> len >> q;
    vector<int>v;
    int temp;
    int a[q];
    for(int i = 0;i < q;i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i < len;i++)
    {
        int x;
        cin >> x;
        temp = x;
        v.push_back(x);
    }
    
    int cnt = 0;
    for(int i = 0;i < len - 1;i++)
    {
        if(v[i] == v[i+1])
        cnt++;
        
    }
    int j = 0;
    int mn;
    if(cnt == len -1)
    {
        for(int i = 0;i < q;i++)
        {
            cout << temp << nl;
        }
    }
    
    
    else
    {
        sort(v.begin() , v.end());

        do {

            //cout << v[j];
            mn = min({v[j] , v[j+1] , v[j+2]}); 
            j++;
            cout << mn << nl;
            
        } while (next_permutation(v.begin() , v.end()));
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
