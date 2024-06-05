#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int Lock(int N, int M, string S, string K) 
{
    int min_moves = INT_MAX;

    for (int i = 0; i <= N - M; ++i) 
    {
        int moves = 0;
        for (int j = 0; j < M; ++j) 
        {
            int diff = abs(S[i + j] - K[j]);
            moves += min(diff, 10 - diff);
        }
        min_moves = min(min_moves, moves);
    }

    return min_moves;
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int a, b;
        cin >> a >> b;

        string S, K;
        cin >> S >> K;

        int result = Lock(a, b, S, K);
        cout << result << endl;
    }

  return 0;
}