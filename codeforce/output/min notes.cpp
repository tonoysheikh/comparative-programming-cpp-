#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007

int cs = 1;
void solve()
{
    
    string x , y;
    cin >> x >> y;
    int len1 = x.size();
    int len2 = y.size();
    vector<string>v;
    for(int i = 0; i < len1;i++)
    {
        for(int j = 1;j <= len1-i;j++)
        {
            v.push_back(x.substr(i , j));
        }
    }
    vector<string>vv;
    for(int i = 0; i < len2;i++)
    {
        for(int j = 1;j <= len2-i;j++)
        {
            vv.push_back(y.substr(i , j));
        }
    }
    string temp;
    string tem;
    int cnt = 0;
    for(int i = 0; i < v.size();i++)
    {
        for(int j = 0;j<vv.size();j++)
        {
            temp = v[i] + vv[j];
            tem =  temp;
            reverse(tem.begin() , tem.end());
            if(temp == tem)
            {
                cnt++;
            }
            else 
            {
                continue;
            }
        }
    }
    cout << "Case " << cs++ << ": " <<cnt % mod << endl;
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