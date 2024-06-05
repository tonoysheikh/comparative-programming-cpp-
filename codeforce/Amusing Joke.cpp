
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
    //cout << "Hello World!" << nl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

   string a , b , c;
   cin >> a >> b >> c;
   string n = a + b;
   sort(n.begin(),n.end());
   sort(c.begin(),c.end());

   if(c == n)
    yes();
   else
    no();


    return 0;
}
