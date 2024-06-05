#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len;
    string s;
    cin >> len >> s;
    int cnt = 1;
    for(int i = 0; i < len - 1;i++)
    {
        if(s[i] == '1' && s[i+1] == '0')
        cnt++;
        
    }
    cout << cnt << endl;  
    
}
int main()
{
    int t;
    cin >> t; 
    while(t--)
    {
        solve();
    }

    return 0;
}