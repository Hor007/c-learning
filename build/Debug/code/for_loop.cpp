#include <iostream>
using namespace std;

int main() {
    int size = 6; // Size of the heart
    for (int i = size / 2; i <= size; i += 2) {
        // Print spaces before the first half of the heart
        for (int j = 1; j < size - i; j += 2) {
            cout << " ";
        }
        // Print the first half of the heart
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Print spaces between the halves
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        // Print the second half of the heart
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // Print the bottom part of the heart
    for (int i = size; i >= 1; i--) {
        // Print spaces before the heart's bottom
        for (int j = 0; j < size - i; j++) {
            cout << " ";
        }
        // Print the bottom of the heart
        for (int j = 1; j <= (2 * i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
