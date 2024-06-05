#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    double average, cnt = 0;
    cin >> n;

    while(n > 0)
    {

            sum += n;
            cnt++;

        cin >> n;
        if(n < 0)
            break;

    }
    average = sum / cnt;
    cout << fixed;
    cout << setprecision(2) <<  average << endl;
    return 0;
}
