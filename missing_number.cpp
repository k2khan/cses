#include <bits/stdc++.h>
using namespace std;


// One option is to sort, and then while iterating through the vector, check if (x-1) exists. If not,
// (x-1) is the missing number.
//
// Another option is to iterate from 1 to n, and check if x is present in the vector

int main() {
    set<int> s;
    int n;
    int curr;
    cin >> n;

    for (int i = 0; i < n-1; i++) {
        cin >> curr;
        s.insert(curr);
    }

   for (int i = 1; i < n; i++) {
       if (s.find(i) == s.end()) {
           cout << i << '\n';
       }
   }

   return 0;
}
