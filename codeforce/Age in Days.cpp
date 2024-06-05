#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int y, m,d;

    y = n / 365;
    n = n % 365;
    m = n /30;
    d = n% 30;

    cout << y << " years\n" << m << " months\n" << d << " days\n"<< endl;

    return 0;
}
