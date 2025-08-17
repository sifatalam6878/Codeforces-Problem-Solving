#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        // Two pointers to create the permutation
        int left = 1, right = n; // Initialize left and right pointers
        while (left <= right) {
            if (left <= right) {
                cout << right-- << " "; // Take from the end
            }
            if (left <= right) {
                cout << left++ << " "; // Take from the start
            }
        }
        cout << endl; // New line after each test case output
    }
    return 0;
}