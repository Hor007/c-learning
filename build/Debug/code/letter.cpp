#include <iostream>
using namespace std;

int main() {
    int x = 1; // Initialize x to a default value (e.g., 1)
    int y;
    cout << "pls y: ";
    cin >> y; 
    x *= y + 1; // Perform the multiplication
    cout << "X = " << x << endl; // Add endl to properly end the line
    return 0;
}
