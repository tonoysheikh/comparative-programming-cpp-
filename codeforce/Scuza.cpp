#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int s,q;
        cin >> s >> q;
        vector<int>v;
        for(int i = 0; i<s; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        vector<int>vec;
        for(int i = 0; i<q; i++)
        {
            int b;
            cin >> b;
            vec.push_back(b);
        }

        for(int i = 0; i <vec.size(); i++)
        {
            int sum = 0;

            for(int j = 0; j < v.size(); j++)
            {
                if(v[j] <= vec[i])
                {
                    sum += v[j];
                }
            }
            cout << sum << " ";
        }
    }

    return 0;
}
