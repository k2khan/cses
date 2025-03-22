#include <bits/stdc++.h>
using namespace std;

int main() {
    int max_count = 0;
    int count = 1;
    string sequence;
    cin >> sequence;

    if (sequence.empty()) {
        cout << 0 << endl;
        return 0;
    }
    
    for (int i = 1; i < sequence.size(); i++) {
        if (sequence[i-1] == sequence[i]) {
            count++;
        } else {
            count = 1;
        }
        max_count = max(max_count, count);
    }
       

    cout << max_count << endl;
    return 0;
}
