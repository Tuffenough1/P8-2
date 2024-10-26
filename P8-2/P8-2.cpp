#include <iostream>
#include <string>

using namespace std;

int countWords(string str);

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    int wordCount = countWords(input);
    cout << "Number of words: " << wordCount << endl;

    return 0;
}

int countWords(string str) {
    int count = 0;
    bool inWord = false;

    for (char ch : str) {
        if (ch != ' ') {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }
    }

    return count;
}