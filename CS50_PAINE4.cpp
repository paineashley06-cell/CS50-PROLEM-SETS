#include <iostream>
using namespace std;

int main() {
    int cents;

    do {
        cout << "Change owed: ";
        cin >> cents;
    } while (cents < 0);

    int coins = 0;

    // Quarters (25cents)
    coins += cents / 25;
    cents %= 25;

    // Dimes (10cents)
    coins += cents / 10;
    cents %= 10;

    // Nickels (5cents)
    coins += cents / 5;
    cents %= 5;

    // Pennies (1cents)
    coins += cents;

    cout << coins << endl;

    return 0;
}
