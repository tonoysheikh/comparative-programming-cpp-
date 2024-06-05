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
         int len;
        cin >> len;
        string s;
        cin >> s;
    
    
        if(len % 3 == 1)
        {
            cout << "YES\n";
            continue;
            
        }
        bool flag = false;
        for(char c = 'a'; c <= 'z' ;c++)
        {
            int f_index = len + 1 , l_index = -1;
            for(int i =0;i < len;i++)
            {
                if(i % 3 == 0 && s[i] == c)
                {
                    f_index = i;
                    break;
                }
            }
            for(int i  = len -1;i >= 0;i--)
            {
                int x = len - 1 - i;
                if(x % 3 == 0 && s[i] == c)
                {

                    l_index = i;
                    break;
                }
            }
            if(f_index < l_index)
            {
                flag = true;
                break;
            }
            
        }
        if(flag)
        {
            yes();
        }
        else
        {
            no();
        }
    }


    return 0;
}
