#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){

	    int n;
	    cin>>n;

	    int ans=0;
	    int arr[n];

	    for(int i=0;i<n;i++){
	        cin>>arr[i];

	            ans=i;
	    }


        cout<<ans<<endl;
	}
	return 0;
}
