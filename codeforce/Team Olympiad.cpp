#include<bits/stdc++.h>
using namespace std;
int main()
{
   int len;
   cin >> len;
    vector<int>pro , math,eu;
   for(int i = 1;i <= len;i++)
   {
       int x;
       cin >> x;
       if(x == 1)
        pro.push_back(i);
       else if(x == 2)
        math.push_back(i);
       else if(x == 3)
        eu.push_back(i);

   }
   int Min = min(pro.size(),min(math.size(),eu.size() ) );

    cout << Min << "\n";
   for(int i = 0;i < Min;i++)
   {
       cout << math[i] << " " << pro[i] << " " << eu[i] << "\n";
   }
    return 0;
}
