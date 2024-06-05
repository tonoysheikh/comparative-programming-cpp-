#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    int a , b;
    for(int i = 0;i < t;i++)
    {
        cin >> a >> b;
        if( b - a > 0)
            cnt++;
    }
    if(cnt == 0)
        cout << 0 << endl;
  else
    cout << cnt << endl;


    return 0;
}
