#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while(t--)
    {
        int n;
        cin >> n;
        if(n == 1)
            cnt++;
    }
    if(cnt == 0)
        cout << "EASY\n";
    else
        cout << "HARD\n";

    return 0;
}
