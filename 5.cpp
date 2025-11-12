#include <iostream>
#include <cstring>
using namespace std;

int countWords(string str) {
    int count = 1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ')
            count++;
    }
    return count;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Number of words: " << countWords(s);
}
