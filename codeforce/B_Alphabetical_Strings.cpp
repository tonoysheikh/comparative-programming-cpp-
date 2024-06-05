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
    string s;
    cin >> s;
    string temp = s;
    sort(temp.begin() , temp.end());
    if(temp[0] != 'a')
        {
            cout << "NO\n";
            return;
        }
    for(int i = 0; i < temp.size() - 1;i++)
    {
        if(temp[i + 1] - temp[i] != 1 )
        {
            cout << "NO\n";
            return;
        }
        
        if(temp[i] == temp[i+1])
        {
            cout << "NO\n";
            return;
        }
    }
    int k;
    for(int j = 0;j < s.size();j++)
    {
         if(s[j] == 'a')
            {
                k = j;// 2
                
            }
           
    }

    int an = k - 1;// 1
    int bn = k+1; // 3 

   
    
    bool res = false;
    for(int i =  1;i < temp.size();i++)
    {
        for(int j = 0;j < s.size();j++)
        {
            
            if(temp[i] == s[j])
            {
                
                if(j == an)
                {
                    an--;
                    
                }
                else if(j == bn)
                {
                    bn++;
                   
                }
                else
                {
                    res = true;
                    break;
                }
            }
        }
    }
    if(res)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }


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