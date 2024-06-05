#include <bits/stdc++.h>
using namespace std;


int main() {
    int len;
    cin >> len;

    char s[1010];
    cin >> s;

    int arr[5];
    memset(arr,0,sizeof(arr));

    for (int i = 0; i < len; ++i) {
        if (s[i] == 'S')
			arr[4] += arr[3];
        if (s[i] == 'P')
			arr[3] += arr[2];
        if (s[i] == 'U')
			arr[2] += arr[1];
        if (s[i] == 'S')
			arr[1] += arr[0];
        if (s[i] == 'N')
			arr[0]++;
    }

    cout << arr[4] << endl;

    return 0;

}
