#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    set<string>st;
    string temp;
    for(int i = 0;i < len - 1;i++)
    {
        temp = s.substr(i , 2);
        st.insert(temp);

    }
    cout << st.size() << "\n";
    
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}