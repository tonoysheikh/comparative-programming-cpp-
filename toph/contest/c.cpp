#include<bits/stdc++.h>
using namespace std;


vector<string> find_ranges(vector<int>& arr) {
    sort(arr.begin(), arr.end()); 
    vector<string> ranges;  
    int start = arr[0];
    int end = arr[0];
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == end + 1) {
            end = arr[i];
        } else {
            if (start == end) {
                ranges.push_back(to_string(start));
            } else {
                ranges.push_back(to_string(start) + "->" + to_string(end));
            }
            start = end = arr[i];
        }
    }
    
    
    if (start == end) {
        ranges.push_back(to_string(start));
    } else {
        ranges.push_back(to_string(start) + "->" + to_string(end));
    }
    
    return ranges;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        vector<string> result = find_ranges(a);
        cout << result.size() << "\n";
        for (const string& r : result) {
            cout << r << "\n";
        }
    }
    return 0;
}
