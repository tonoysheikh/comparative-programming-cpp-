#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 3 || n == 2)
        cout << "NO SOLUTION\n";
    else
    {
        for(int i =2;i <=n;i+= 2)
        {
            cout << i << " ";
        }
         for(int i =1;i <=n;i+= 2)
        {
            cout << i << " ";
        }
    }
    cout << "\n";

    return 0;
}
