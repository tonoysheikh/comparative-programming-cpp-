#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a , b;
    cin >> a >> b;
    string res;
    for(int i=0;i<a.size();i++)
    {
        if(a[i] == b[i])
            res +='G';
        else
            res += 'B';

    }
    cout << res << endl;
    }

    return 0;
}
