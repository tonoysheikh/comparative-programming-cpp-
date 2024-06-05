#include<iostream>
using namespace std;
int main()
{

    int t ;
    cin >> t;
    int cnt = 0;

        string c;
        cin >> c;
        for(int i = 0;i < c.size();i++)
        {
            if(c[i] == c[i+1])
                cnt++;
        }

    cout << cnt << endl;


    return 0;
}

