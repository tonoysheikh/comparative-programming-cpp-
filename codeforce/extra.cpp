#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  string n;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i] == '+')
    {
      continue;
    }
    else
    {
      n+=s[i];
    }
  }
  sort(n.begin(),n.end());
  for(int i=0; i<n.size(); i++)
  {
    cout<<n[i];
    if(i != n.size() - 1)
    {
        cout << '+';
    }
  }
  cout << endl;
  
  return 0;
}