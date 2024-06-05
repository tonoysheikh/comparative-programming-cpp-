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
    int a , b;
    cin >> a >> b;
    vector<int>v;
    for(int i = 0;i < a ;i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    int Min = 0;
    int Max = 0;
    int min_index = 0 , max_index= 0;
    for(int i = 0;i < a ;i++)
    {
        if(Min > v[i])
            {
                Min = v[i];
                min_index = i;
            }
        if(Max < v[i])
            {
                Max =  v[i];
                max_index = i;
            }
    }

    if( (abs(max_index - min_index) ) >= b)
    {
         swap(v[min_index] , v[max_index]);
    }


    for(int i = 0; i < a;i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";


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


