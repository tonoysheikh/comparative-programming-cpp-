#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    sort(s.begin(),s.end());


    string n[101];
    int j = 0;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] == '+')
            continue;
        else
            {
                n[j] = s[i];
                j++;
            }
    }


     for(int i = 0;i<j;i++)
    {
        cout << n[i];
        //if(i != j-1)
            cout << '+';
    }
    cout << endl;


    return 0;
}
