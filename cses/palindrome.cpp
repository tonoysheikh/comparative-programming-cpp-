#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string temp;
    cin >> temp;
    set<string>s;
    sort(temp.begin() , temp.end());
    s.insert(temp);
    while(next_permutation(temp.begin() , temp.end()))
    {
      s.insert(temp);
    }
    if(s.size() == 0)
    {
        cout <<  "NO SOLUTION" << endl;
        return 0;
    }
    string ans;
    bool res = false;
    for(auto it:s)
    {
      string k = it;
      string v = k;
      reverse(v.begin() , v.end());
      
      if(k == v)
      {
        ans = k;
        res = true;
        break;
      }
    }
    if(!res)cout <<  "NO SOLUTION" << endl;
    else
    cout << ans << endl;
    return 0;
}