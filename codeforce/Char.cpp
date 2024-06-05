#include<iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;
    if(isupper(x))
    {
       x = x + 32;
    }
    else if(islower(x))
    {
        x = x - 32;
    }

    cout << x << endl;
    return 0;
}
