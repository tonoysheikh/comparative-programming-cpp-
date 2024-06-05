#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;

    set<char>c;
    for(int i = 0;i<n;i++)
    {
        char ch;
        cin >> ch;
        c.insert(ch);
    }
    cout << c.size() - k << endl;


    return 0;
}
