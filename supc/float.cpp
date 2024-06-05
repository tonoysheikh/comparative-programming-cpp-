#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    int j;
    for(int i = 0; i < s.size();i++)
    {
        if( (s[i] == '.') && s[i-1] == '9')
        {
           cout << "GOTO Vasilisa." << "\n";
            return 0;
        }
        if(s[i] == '.')
        {
            j = i;
            if(s[i+1] >= '5')
                s[i-1] += 1;
        }
    }
    s.erase(s.begin()+j , s.end());

        cout << s << "\n";



    return 0;
}
