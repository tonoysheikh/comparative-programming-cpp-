#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int giftGivers[n];

    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi;
        giftGivers[pi - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << giftGivers[i] << " ";
    }

    return 0;
}

