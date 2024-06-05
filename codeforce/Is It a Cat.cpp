#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    set<char>st;
    for(int i = 0 ;i < len;i++)
    {
        st.insert(tolower(s[i]));
    }
    bool result =  true;
    vector<char>v;
    for(auto it:st)
    {
        v.push_back(it);

    }
    if(v[0] == 'e' && v[1] == 'm' && v[2] == 'o' && v[3] == 'w')
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
