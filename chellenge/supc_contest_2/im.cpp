#include <bits/stdc++.h>
using namespace std;

int main() {

	int T;
	cin>>T;
	while (T--)
	{
	    int N;
	    cin>>N;

	    map<int, int>m;

        int arr[N];

	    for(int i=0; i<N; i++){
	       cin>>arr[i] ;
	       m[arr[i]]++;
	    }
	   // cout << m[x] << endl;



	    int max=0;

	    for(int i=0; i<N; i++){
	        if(max<m[arr[i]])
	        max = m[arr[i]];
	        cout << max << endl;

	}
	cout<<N-max<<endl;
	}
	return 0;
}
