#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--){
	    ll n,x;
	    cin>>n>>x;


	    if(x%2==0 && (n%2)!=0)
	        cout << "NO" << endl;

	   else
	   cout << "YES" << endl;
	}
	return 0;
}
