#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n, q;
  cin >> n >> q;
  long long  arr[n];
  for(long long i=0; i<n; i++)
  {
    cin >> arr[i];
  }
     set<long long>s;
  for(int i=0; i<q; i++)
  {
    long a, b;
    cin >> a >> b;
    
    for(long long j=a-1; j<b; j++)
    {
      s.insert(arr[j]);
    }
    cout << s.size() << endl;
  }
  
  return 0;
}