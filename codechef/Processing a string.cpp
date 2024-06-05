#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int sum;
        int res = 0;
        for(int i = 0;i < s.size();i++)
        {
            if(isupper(s[i]))
                continue;
            else if(s[i] >= '1' && s[i] <= '9')
                {
                    sum = s[i] - '0';
                    res += sum;
                }

        }
        cout << res << "\n";
    }

    return 0;
}
