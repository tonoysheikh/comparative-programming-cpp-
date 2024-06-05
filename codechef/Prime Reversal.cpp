#include <iostream>
using namespace std;

int main() {
    int T;
	cin >> T;
	while(T--){
	   int len;
	   cin >> len;
	   string a , b;
	   cin >> a >> b;
	   int cnt = 0;
	   int c = 0;
	   for(int i =0;i<a.size();i++)
       {
           if(a[i] == '1')
            cnt++;
           if(b[i] == '1')
            c++;
       }
       if(cnt == c)
        cout << "YES" << endl;
       else
        cout << "NO" << endl;

	}
	return 0;
}
