

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

   int a , b;
   cin >> a >> b;
   for(int i =1 ; i <= a;i++)
   {
       for(int j = 0;j < b;j++ )
       {

           if(i%4 == 0)
           {
               if(j==0)
                cout << '#';
               else
                cout << '.';

           }
           else if(i % 4 == 2)
           {
               if(j == b - 1)
                   cout << '#';
               else
               cout << '.';
           }
           else
            cout << '#';

       }
       cout << nl;


   }



    return 0;
}
