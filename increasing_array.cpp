#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int prev;
    int curr;
    long long total = 0;
    
    cin >> n;
    cin >> prev;

    for (int i = 0; i < n-1; i++) {
        cin >> curr;
        if (curr < prev) {
            total += prev - curr;
        }
        prev = max(prev, curr);
    }

    cout << total << endl;
    return 0;
}
