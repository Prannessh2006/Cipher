#include <iostream>
#include <string>

using namespace std;

int stringLength(const string &str) {
    return str.length();
}

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2;
}

void question1() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int length = stringLength(str);
    cout << "Length of the string \"" << str << "\" is: " << length << endl;
}

void question2() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a character to count: ";
    cin >> ch;
    int count = countCharacter(str, ch);
    cout << "Character '" << ch << "' occurs " << count << " times in \"" << str << "\"" << endl;
}

void question3() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin.ignore(); // To clear the buffer after previous input
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    string concatenated = concatenateStrings(str1, str2);
    cout << "Concatenated string: " << concatenated << endl;
}

int main() {
    cout << "Question 1: String Length" << endl;
    question1();
    
    cout << "\nQuestion 2: Count Character" << endl;
    question2();
    
    cout << "\nQuestion 3: Concatenate Strings" << endl;
    question3();

    return 0;
}
