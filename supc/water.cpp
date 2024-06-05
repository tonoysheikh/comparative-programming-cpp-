#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int up = 0;
    int low = 0;
    for(int i = 0;i < s.size();i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else if(islower(s[i]))
        {
            low++;
        }        
    }
    string n;
    for(int i = 0;i < s.size();i++)
    {
        if(up > low)
        {
            n += toupper(s[i]);
        }
        else if(up <= low)
        {
            n+= tolower(s[i]);
        }
    }

    cout << n << endl;
    
    
    

    return 0;
}

