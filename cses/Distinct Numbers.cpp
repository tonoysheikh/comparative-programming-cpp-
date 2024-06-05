#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    long long int len;
    cin>> len;
    for(int i = 0;i < len;i++)
    {
        long long int x;
        cin>> x;
        s.insert(x);
    }
    cout << s.size() << endl;
}
