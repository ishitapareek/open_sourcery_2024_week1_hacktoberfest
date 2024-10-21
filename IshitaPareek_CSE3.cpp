#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (for the upper half): ";
    cin >> n;

    // Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        // Print left half stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right half stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the butterfly
    for (int i = n; i >= 1; i--) {
        // Print left half stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print right half stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
