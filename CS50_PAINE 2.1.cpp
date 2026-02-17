#include <iostream>
#include <string>
using namespace std;

// Function to get the Scrabble score of a word
int computeScore(const string& word) {
    int score = 0;

    // Loop through each character in the word
    for (char c : word) {
        c = toupper(c); 
        switch(c) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'L': case 'N': case 'S': case 'T': case 'R':
                score += 1;
                break;
            case 'D': case 'G':
                score += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                score += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                score += 4;
                break;
            case 'K':
                score += 5;
                break;
            case 'J': case 'X':
                score += 8;
                break;
            case 'Q': case 'Z':
                score += 10;
                break;
            default:
                // Ignore non-letter characters
                break;
        }
    }

    return score;
}

int main() {
    string player1Word, player2Word;

    // Ask each player for a word
    cout << "Player 1: Enter your word: ";
    cin >> player1Word;

    cout << "Player 2: Enter your word: ";
    cin >> player2Word;

    // To Compute scores
    int score1 = computeScore(player1Word);
    int score2 = computeScore(player2Word);

    // Print scores 
    cout << "Player 1 score: " << score1 << endl;
    cout << "Player 2 score: " << score2 << endl;

    // Determine the winner
    if (score1 > score2) {
        cout << "Player 1 wins!" << endl;
    } else if (score2 > score1) {
        cout << "Player 2 wins!" << endl;
    } else {
        cout << "Tie!" << endl;
    }

    return 0;
}
