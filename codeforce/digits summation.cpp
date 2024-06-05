#include<iostream>
using namespace std;

int main()
{
    long long a , b;
    cin >> a >> b;

    long long s1 = a % 10;
    long long s2 = b % 10;

    cout << s1 + s2 << endl;

    return  0;
}
