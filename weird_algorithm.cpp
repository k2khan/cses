#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;

    while (x != 1) {
        cout << x << ' ';
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = (x * 3) + 1;
        }
    }
    
    cout << x;
}
