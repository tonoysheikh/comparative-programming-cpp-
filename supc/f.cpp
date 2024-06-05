#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;
    map <string,string>mp;
    string  c , d;
    for(int i = 0;i < a;i++)
    {

        cin >> c >> d;
        d += ';';
        mp[d] = c;

    }
    for(int i = 0;i < b;i++)
    {
        string x , y;
        cin >> x >> y;

        cout << x << " " << y << " " << "#" << mp[d] << "\n";
    }


    return 0;
}

