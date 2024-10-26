#include <iostream>
#include <string>

using namespace std;

int countWords(string str);

int main() {
    string input;

    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);

        if (input == "Q") break;
        cout << "Word count: " << countWords(input) << endl;
    }
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