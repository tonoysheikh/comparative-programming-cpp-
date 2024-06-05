#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int sum = 0, x;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        sum += x;
    }
    cout << n * (n + 1) / 2 - sum;
    return 0;
}
