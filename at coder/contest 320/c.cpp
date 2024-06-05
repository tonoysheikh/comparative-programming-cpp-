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
#define ull unsigned long long



void solve()
{
   int len;
   cin >> len;

   string s1 , s2 , s3;
   cin >> s1 >> s2 >> s3;

   if(s1 == s2 && s2 == s3)
   {
        cout << len << nl;
        return;
   }
   string t1 = s1;
   string t2 = s2;
   string t3 = s3;
   sort(t1.begin() , t1.end());
   sort(t2.begin() , t2.end());
   sort(t3.begin() , t3.end());
   int ind1 , ind2 , ind3;
   int a , b , c;
   int mn = len + 5;
   if(t1 == t2 && t2 == t3)
   {
        for(int i = 0; i < t1.size();i++)
        {
    
             for(int j = 0;j < s1.size();j++)
            {
                if(s1[j] == t1[i])
                {
                    
                    a = (j % len) + 1; 
                   
                }
            }
            for(int k = 0;k < s2.size();k++)
            {
                if(s2[k] == t1[i])
                {
                    
                    b = (k % len) + 1; 
                        
                }
            }
            for(int p = 0;p < s3.size();p++)
            {
                if(s3[p] == t1[i])
                {
    
                    c = (p % len) + 1;
                    
                }
            }
            int an = max({a,b,c});
           
            mn = min(an -1 , mn);   

        }
        cout << mn << nl;
        return;
       
   }
   else
   {
        cout << -1 << nl;
        return;
   }

   


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}