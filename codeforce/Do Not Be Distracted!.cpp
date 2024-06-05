#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for(int i = 0;i < n;i++)
        {
            if(s[i] == s[i+1])
            {
                continue;
            }
            else{

                for(int j = i;i < n;j++)
                {
                    if(s[j] == s[i])
                        cout << no << endl;
                }
            }
        }
    }




    return 0;
}
