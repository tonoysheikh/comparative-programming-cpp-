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
    string n;
    for(int i = 0; i < s.size();i++)
    {
        s[i] = tolower(s[i]);
        
        
        if(s[i] == 'a' || s[i] == 'o' ||s[i] == 'y' ||s[i] == 'e' ||s[i] == 'u' ||s[i] == 'i')
           {
                continue;
            }         

        
        else
        {
            cout << '.';
            cout << s[i];    
        } 
          
    }
    
    cout << nl;
    

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();
    


    return 0;
}
