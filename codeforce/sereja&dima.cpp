#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int>v;
    for(int i = 0; i < t;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    int sereja = 0;
    int dima = 0;
    int turn = 0;
    int f_index = 0;
    int l_index = t - 1;
    while(f_index <= l_index)
    {
        if(turn % 2 == 0)
        {
            if(v[f_index] < v[l_index])
            {
                sereja += v[l_index];
                l_index--;
            }
            else
            {
                sereja += v[f_index];
                f_index++;
            }

        }
        else
        {
            if(v[f_index] < v[l_index])
            {
                dima += v[l_index];
                l_index--;
            }
            else
            {
                dima += v[f_index];
                f_index++;
            }    
             

        }
        turn++;
    }

    cout << sereja << " " << dima<< "\n";
    

    return 0;
}