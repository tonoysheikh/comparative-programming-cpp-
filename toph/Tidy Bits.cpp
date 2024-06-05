#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int cnt = 0;
    while(1)
    {
        int n = num % 2;
        num = num/2;

        if(n == 1)
        {
            cnt++;
        }
        if(num == 0)
        {
            break;
        }
    }
    string s;
    for(int i = 0 ;i < cnt;i++)
    {
        s += '1';    
    }
    int sum = 0;
    for(int i = 0;i < s.size();i++)
    {
        int k = s[i] - '0';
        int res = k * pow(2 , (cnt - 1  - i));
        sum += res;

    }
    cout << sum << endl;

    return 0;
}