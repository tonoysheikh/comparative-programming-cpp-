#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num  , findex , eindex;
    cin >> num >> findex >> eindex;
    vector<int>v;
    for(int i = 0; i < num ;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sum = 0;
     for(int i = findex; i <= eindex ;i++)
    {
        sum += v[i];
    }
    cout << sum << "\n";

}
