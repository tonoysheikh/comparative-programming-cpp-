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
    string pick_string;
    cin >> pick_string;
    int temp;
    while(t--)
    {
        string s;
        cin >> s;
        string n; 
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == '_')
                n+= " ";   
            else if(isalpha(s[i]))
            {
                if(islower(s[i]))
                {
                    temp = s[i] - '0';
                    int pick_number = temp - 48;
                    n += pick_string[pick_number - 1];  
                }
                else
                {
                    temp = tolower(s[i]) - '0';
                    int pick_number = temp - 48;
                    n += toupper(pick_string[pick_number - 1]);


                }

            }
            else
            {
                n+= s[i];
            }    
        }
        cout << n << nl;
    }


    return 0;
}
