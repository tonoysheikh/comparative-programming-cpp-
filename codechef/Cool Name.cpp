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



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        sort(s.begin(),s.end());
    
        int sum = 0;
        int result = 0;
        int temp = 0;
        for(int i = 0;i < len;i++)
        {
           
            temp = (s[i] - '0');
            
            result = temp - 48;
            
            sum += (result * (i + 1) );
        }
            cout << sum << nl;

    }
    


    return 0;
}
