#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    //int revVctr[8];               // User values
    int i;                        // Loop index
    int  temp = 0;                // temporary storage

    vector<int>revVector(8);   // Create vector

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVector.at(i);
    }

    // Reverse
    for (i = 0; i < NUM_ELEMENTS/2; ++i) {
        temp = revVector.at(i);
        revVector.at(i) = revVector.at(NUM_ELEMENTS - i - 1); // Swap
        revVector.at(NUM_ELEMENTS - i - 1) = temp;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVector.at(i);
    }
    cout << endl;

    return 0;
}