#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K;
    string A;
    cin >> N >> K >> A;

    if (K > N) {
        cout << "WRONGANSWER" << endl;
        return 0;
    }

    string B = "";
    for (int i = 0; i < K; i++) {
        B += A[i];
    }
    while (B.length() < N) {
        B += 'a'; // Fill the remaining with 'a'
    }

    cout << B << endl;
    return 0;
}