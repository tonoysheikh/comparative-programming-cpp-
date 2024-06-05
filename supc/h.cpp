#include<bits/stdc++.h>
using namespace std;
int main()
{
   int len;
   cin >> len;
   map<int,int>mp;
   for(int i =0;i<len;i++)
   {
       int x;
       cin >> x;
       mp[x]++;
   }
   int max = 0;
   for(auto i : mp)
   {
       if(max < i.second)
        max = i.second;
   }
   cout << max << endl;


    return 0;
}

