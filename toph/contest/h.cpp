#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int countValidBinaryStrings(int N) {
    vector<long long> dp0(N + 1, 0);  // Number of valid strings ending with '0'
    vector<long long> dp1(N + 1, 0);  // Number of valid strings ending with '1'

    // Base case
    dp0[1] = 1;  // Only one way to have a valid string ending with '0'
    dp1[1] = 1;  // Only one way to have a valid string ending with '1'

    for (int i = 2; i <= N; i++) {
        // Valid strings ending with '0' can be extended with either '0' or '.'
        dp0[i] = (dp0[i - 1] + dp1[i - 1]) % MOD;
        // Valid strings ending with '1' can be extended only with '.'
        dp1[i] = dp0[i - 1];
    }

    // The total number of valid binary strings is the sum of valid strings ending with '0' and '1' at the last position
    long long totalValid = (dp0[N] + dp1[N]) % MOD;

    return totalValid;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int result = countValidBinaryStrings(N);
        cout << result << endl;
    }
    return 0;
}
