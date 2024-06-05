#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int len;
        cin >> len;
        set<int>s;
        for(int i = 0;i<len;i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;

    }

    return 0;
}
