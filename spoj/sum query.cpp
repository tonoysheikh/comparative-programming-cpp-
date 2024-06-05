#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q;
    cin >> q;
    while(q--)
    {
        int a , b;
        cin >> a >> b;
        int sum = 0;
        for(int i = a;i <= b;i++)
        {
            sum += v[i];
        }
        cout << sum << "\n";
    }

    return 0;
}