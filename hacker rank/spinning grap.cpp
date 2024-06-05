#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int res =  n +(n - 1);
        cout << res << endl;
    }

    return 0;
}
