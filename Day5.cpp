#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void checkOddEven(int number) {
    if (number % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

void reverseString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(str[i], str[n - i - 1]);
    }
    cout << "Reversed string: " << str << endl;
}

void countVowelsConsonants(string str) {
    int vowels = 0;
    int consonants = 0;
    
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            ++vowels;
        } else if (ch >= 'a' && ch <= 'z') {
            ++consonants;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkOddEven(num);

    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverseString(str);

    cout << "Enter a string: ";
    cin >> str;
    countVowelsConsonants(str);

    return 0;
}
