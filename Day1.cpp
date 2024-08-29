#include <iostream>
#include <string>
using namespace std;

// Program 1: Concatenate Two Strings
int concaten() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    string concatenatedString = str1 + str2;
    cout << "Concatenated string: " << concatenatedString << endl;
}
//Program 2: Calculate Average of Five Grades
int avg(){
    int grades[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> grades[i];
        sum += grades[i];
    }
    double average = static_cast<double>(sum) / 5;
    cout << "The average grade is: " << average << endl;
}

// Program 3: Output Square of an Integer
int squ(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int square = number * number;
    cout << "The square of " << number << " is: " << square << endl;
    return 0;
}
