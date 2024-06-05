#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int a;
    if(n%2 ==0)
        a = n/2;
    else
        a= -(n/2 + 1);
    cout << a << endl;
    return 0;
}
