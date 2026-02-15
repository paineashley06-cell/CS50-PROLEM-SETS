#include <iostream>
using namespace std;

int main() {
    int height;
    
    do {
        cout << "Height: ";
        cin >> height;
    } while (height <= 0);

    // for the pyramid
    for (int p = 1; p <= height; p++) {

        // for the spaces
        for (int s = 1; s <= height - p; s++) {
            cout << " ";
        }

        // for the hashes
        for (int h = 1; h <= p; h++) {
            cout << "#";
        }

        cout << endl;
    }

    return 0;
}
