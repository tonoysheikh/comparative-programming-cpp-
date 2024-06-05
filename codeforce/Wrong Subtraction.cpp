#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int rem = 0;
    for(int i= 0;i < b;i++)
    {

        rem = (a % 10);

        if(rem == 0)
        {
             a = (a/10);
        }
        else
        {
            a = a -1;
        }


    }

    cout << a << endl;


    return 0;
}

