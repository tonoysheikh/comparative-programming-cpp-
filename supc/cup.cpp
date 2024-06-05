#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int>v;
    int sum = 0;
    set<int>st;
    int g , f;
    for(int i = 0 ;i < t;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
        st.insert(x);
    }
    if(sum % t == 0)
    {
        if(st.size() == 1)
            {
                cout << "Exemplary pages.\n";
                return 0;
            }
        else
        {
            int a = st[1];
            for(int i = 0;i < v.size();i++)
            {
                if(a == v[i])
                    g = i;
                else if(st[2] == v[i])
                    f = i;
            }
            cout << st[2] - st[0] << " ml. from cup #" << g+1 << " to cup #" << f+1 << "\n";
            return 0;
        }
    }
    else
    {
        cout << "Unrecoverable configuration.\n";
        return 0;
    }


    return 0;
}
