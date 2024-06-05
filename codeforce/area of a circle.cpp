#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double a;
    cin >> a;

    double area = pow(a , 2) * 3.141592653;

    cout << fixed << setprecision(9) << area << endl;

    return 0;
}
