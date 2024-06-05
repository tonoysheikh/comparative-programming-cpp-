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
    string s;
    cin >> s;
    int num0 = s[0] - '0';
    int num1 = s[1] - '0';
    int num = num0 + num1;
    int sum = 0;
     int num2;
    for(int i = 3; i < s.size();i++)
    {
        
        
        if(s[i] >= '0' && s[i] <= '9')
        {
            num2 = s[i] - '0';
            sum += num2;
        }
        else
        continue;
        
    }
    if((sum % 2 == 0) && (num % 2 == 0))
    cout << "valid\n";
    else
    cout << "invalid\n";


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   
    solve();
    


    return 0;
}
