#include <iostream>
#include <string>
#include <cctype>
#include <unordered_set>
using namespace std;

// Function to check if key is valid
bool is_valid_key(const string& key) {
    if (key.length() != 26) return false;

    unordered_set<char> seen;
    for (char c : key) {
        if (!isalpha(c)) return false;

        char upper = toupper(c);
        if (seen.count(upper)) return false; // No duplicates
        seen.insert(upper);
    }

    return true;
}

int main(int argc, char* argv[]) {
    string key;

    // If user provides a key, use it; otherwise show default example key
    if (argc == 2) {
        key = argv[1];
    } else {
        key = "NQXPOMAFTRHLZGECYJIUWSKDVB";
    }
    
    // Prompt user for plaintext
    string plaintext;
    cout << "Enter message to encrypt: ";
    getline(cin, plaintext);

    string ciphertext = "";

    for (char c : plaintext) {
        if (isalpha(c)) {
            bool is_upper = isupper(c);
            int index = toupper(c) - 'A';          // 0-25
            char sub = toupper(key[index]);        // Substituted letter

            if (!is_upper) sub = tolower(sub);    // Match original case
            ciphertext += sub;
        } else {
            ciphertext += c; // Keep non-letters as-is
        }
    }

    // Output ciphertext
    cout << "Encrypted message: " << ciphertext << endl;

    return 0;
}


