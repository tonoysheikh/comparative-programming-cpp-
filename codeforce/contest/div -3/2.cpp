#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define nl '\n'


void solve()
{
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    char ch='.';
    for( int i=0; i<3 ; i++) {
        if( str1[i]==str2[i] && str1[i]==str3[i]) {
            ch=str1[i];
        }
    }

    if(str1[0]==str1[1] && str1[0]==str1[2]) {
        ch = str1[0];
    }
    if(str2[0]==str2[1] && str2[0]==str2[2]) {
        ch = str2[0];
    }
    if(str3[0]==str3[1] && str3[0]==str3[2]) {
        ch = str3[0];
    }
    if(str1[0]==str2[1] && str1[0]==str3[2]) {
        ch = str1[0];
    }
    if(str3[0]==str2[1] && str3[0]==str1[2]) {
        ch = str3[0];
    }

    if(ch=='.') {
        cout<< "DRAW" <<endl;
    }
    else {
        cout<< ch <<endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
