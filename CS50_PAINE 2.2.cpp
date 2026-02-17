#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std; 

int main(){
	 string text;
	 
    cout << "Text: ";
    getline(cin, text);

    int letters = 0;
    int words = 1; // Start at 1 because the last word won't have a space
    int sentences = 0;

    // Count letters, words, and sentences
    for (char c : text) {
        if (isalpha(c)) {
            letters++;
        }
        else if (isspace(c)) {
            words++;
        }
        else if (c == '.' || c == '!' || c == '?') {
            sentences++;
        }
    }

    // Calculate averages per 100 words
    double L = (double)letters / words * 100;
    double S = (double)sentences / words * 100;

    // Coleman-Liau formula
    double index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);

    // Output human-readable grade
    if (grade < 1) {
        cout << "Before Grade 1" << endl;
    } 
    else if (grade >= 16) {
        cout << "Grade 16+" << endl;
    } 
    else {
        cout << "Grade " << grade << endl;
    }

    return 0;

}