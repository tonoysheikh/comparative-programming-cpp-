#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    if(n>=1 && n <= 50)
        cout << 100 << endl;
    else if(n >= 51 && n <= 100)
        cout << 50 << endl;
    else
        cout << 0 << endl;
    return 0;
}
