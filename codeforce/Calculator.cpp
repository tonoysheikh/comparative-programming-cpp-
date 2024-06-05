#include<iostream>
using namespace std;
int main()
{
    int  a;
    cin >> a;
    char c;
    cin >> c;
    int b ;
    cin >> b;
    if(c == '+')
        cout << a+b << endl;
        else if(c == '-')
            cout << a-b << endl;
        else if(c == '*')
            cout << a*b << endl;
            else
            cout << a/b << endl;


    return 0;
}
