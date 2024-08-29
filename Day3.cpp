#include <iostream>
using namespace std;

void sumOfNaturalNumbers() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;
}

void factorial() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    if (N < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return;
    }

    int factorial = 1;
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }
    cout << "The factorial of " << N << " is: " << factorial << endl;
}

void multiplicationTable() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Multiplication table of " << N << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << N << " x " << i << " = " << N * i << endl;
    }
}

int main(){
    sumOfNaturalNumbers();
    factorial();
    multiplicationTable();
}
