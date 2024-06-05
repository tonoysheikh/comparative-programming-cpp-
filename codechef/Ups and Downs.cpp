#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int len;
    cin>> len;
    vector<int>v;
    for(int i = 0; i < len;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size() - 1;i++)
    {
        if(i % 2 == 0)
        {
            if(v[i] <= v[i+1])
            {
                continue;
            }
            else
            {
                swap(v[i] , v[i+1]);
            }
        }
        else
        {
            if(v[i] >= v[i+1])
            {
                continue;
            }
            else
            {
                swap(v[i] , v[i+1]);
            }
        }
    }
    for(int i = 0; i < v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

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