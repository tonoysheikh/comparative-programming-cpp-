#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    int res = 0;
    int cnt = 0;
    int result = 0;
    while(result < n)
    {
        res += i;
        i++;
        result += res;
        if(result<=n)
        cnt++;

    }

    cout << cnt  << "\n";

    return 0;
}
