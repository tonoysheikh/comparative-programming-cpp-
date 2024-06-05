#include<bits/stdc++.h>

using namespace std;

int mi(long long N, long long K) {
    
    vector<vector<long long>> dp(N + 1, vector<long long>(K + 1, 0));

    
    for (long long i = 1; i <= K; i++) {
        dp[1][i] = i;
    }

    
    for (long long k = 2; k <= N; k++) {
        for (long long z = 1; z <= K; z++) {
            dp[k][z] = INT_MAX;
            for (long long  x = 1; x <= z; x++) {
                long long result = 1 + max(dp[k - 1][x - 1], dp[k][z - x]);
                dp[k][z] = min(dp[k][z], result);
            }
        }
    }

    return dp[N][K];
}

int main() {
    long long N, K;
    cin >> N >> K;
    long long m = mi(N, K);
    cout << m << "\n";
    return 0;
}
