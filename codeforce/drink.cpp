#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double p;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> p;
        sum += p;
    }
    cout << sum / n << endl;
    return 0;
}
