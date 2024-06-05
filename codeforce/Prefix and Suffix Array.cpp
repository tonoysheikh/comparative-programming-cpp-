#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector <string>v;
		for(int i = 0; i < 2 * n - 2; i++){
			string s;
			cin >> s;
			if((int)s.size() == n - 1){
				v.push_back(s);
			}
		}
		reverse(v[1].begin(), v[1].end());
		if(v[0] == v[1]){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}

	return 0;
}
