#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    vector<int> arr(b);
    for (int i = 0; i < b; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < b; i++) {
        sum += arr[i];
    }

    int total = (a * (a + 1)) / 2;
    cout << total - sum << endl;
}

int main() {



    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
