#include<iostream>
using namespace std;

int main()
{
    char n ;
    cin >> n;

    if(isupper(n))
    {
        cout << "ALPHA\nIS CAPITAL" << endl;
    }
    else if(islower(n))
    {
         cout << "ALPHA\nIS SMALL" << endl;
    }
    else
    {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}
