#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a , b;
    cin >> a , b;
    int len1 = a.size();
    int len2 = b.size();
    char a_last = a.back();
    char b_last = b.back();

    if(a_last == b_last)
    {
        if(len1 == len2)
            cout << '=' << "\n";
        else if(a_last == 'S')
        {
            if(len1 > len2)cout << '<' << "\n";
            else
                cout << '>' << "\n";
        }
        else if(a_last == 'L')
        {
            if(len1 > len2)cout << '>' << "\n";
            else
                cout << '<' << "\n";
        }

    }
    else if(a_last != b_last)
    {
        if(a_last < b_last)
            cout << '>' << "\n";
        else
            cout << '<' << "\n";
    }


}
int main()
{
    int t;
    cin >> t;
    for(int i = 0;i < t;i++)
    {
        solve();
    }

    return 0;
}
