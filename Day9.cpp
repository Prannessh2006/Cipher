#include <iostream>

using namespace std;

void question1() {
    int num = 42;
    int* ptr = &num;

    cout << "Question 1: Pointer to an Integer" << endl;
    cout << "Value of the variable using the variable itself: " << num << endl;
    cout << "Value of the variable using the pointer: " << *ptr << endl;
}

void question2() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    cout << "\nQuestion 2: Pointer Arithmetic with an Array" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": " << *(ptr + i) << endl;
    }
}

void question3() {
    int num = 50;
    int* ptr = &num;
    int** ptrToPtr = &ptr;

    cout << "\nQuestion 3: Pointer to a Pointer" << endl;
    cout << "Value using the variable: " << num << endl;
    cout << "Value using the pointer: " << *ptr << endl;
    cout << "Value using the pointer to pointer: " << **ptrToPtr << endl;
}

int main() {
    question1();
    question2();
    question3();

    return 0;
}
