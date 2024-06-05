#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a;
        cin >> n >> a;
        int na = n - a;

        int result = min(a,na);
        cout << result << "\n";
    }

    return 0;
}
