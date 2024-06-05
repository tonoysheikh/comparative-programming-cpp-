#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>v[205];
        for(int i=1;i<=m;i++)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        set<int>st;
        int y=0;
        for(int i=1;i<=n;i++)
        {
            if(v[i].size()==1)
            {
                y++;
                st.insert(v[i][0]);
            }
        }
        int x=st.size();
        cout<<x<<' '<<y/x<<"\n";
    }
    return 0;
}