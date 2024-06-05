#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int len;
        cin >> len;
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        cout << s << "\n";
    }

    return 0;
}