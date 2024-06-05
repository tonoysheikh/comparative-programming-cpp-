#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    while(cin >> s)
    {
        int upper = 0;
        int lower = 0;
        int digit = 0;
        int cnt = 0;
        for(int i =0; i<s.size(); i++)
        {
            if(isupper(s[i]))
                upper++;
            else if(islower(s[i]))
                lower++;
            else if(isdigit(s[i]))
                digit++;

            if(upper >= 1 && lower >= 1 && digit >= 1)
            {
                cnt++;
                upper = 0;
                lower = 0;
                digit = 0;
            }
        }
        cout << cnt << endl;
    }


    return 0;
}
