#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector <string> ss;
    for(int i = 0;i <s.size() - 1;i++)
    {
        string temp;
        if(s[i] == s[i+1])
            continue;
        else
            ss.push_back(s[i]);


    }
    for(auto i = ss.begin();i != ss.end();i++)
    {
        cout << *i;
    }
    cout << endl;

    return 0;
}
