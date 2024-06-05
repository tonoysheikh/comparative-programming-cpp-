#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while(t--)
    {
        int len;
        cin >> len;
       string a;
       cin >> a;
       string s[len] ;
       for(int i = 0 ;i < a.size();i++)
       {
           if(a[i] == 'A')
           {
               s[i] = 'T';
           }
           else if(a[i] == 'T')
            s[i] = 'A';
           else if(a[i] == 'C')
            s[i] = 'G';
           else
            s[i] = 'C';
       }
       for(int j = 0 ;j < len;j++)
       {
           cout  << s[j];
       }
       cout << endl;

    }


    return 0;
}











