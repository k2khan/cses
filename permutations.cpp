#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> left;
    vector<int> right;
    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    } else {
        for (int i = 1; i < n+1; i++) {
            if (i % 2 == 0) {
                left.push_back(i);
            } else {
                right.push_back(i);
            }
        }
    }

    for (auto it = left.begin(); it != left.end(); it++) {
        cout << *it << ' ';
    }

    for (auto it = right.begin(); it != right.end(); it++) {
        cout << *it << ' ';
    }

    cout << endl;
    return 0;
}
