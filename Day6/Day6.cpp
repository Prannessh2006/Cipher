#include <iostream>
#include <vector>

using namespace std;

void printSumOfArray(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    cout << "Sum of the array: " << sum << endl;
}

void printSumOddEven(const vector<int>& arr) {
    int sumOdd = 0;
    int sumEven = 0;
    
    for (int num : arr) {
        if (num % 2 == 0) {
            sumEven += num;
        } else {
            sumOdd += num;
        }
    }
    
    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
}

void printCountOddEven(const vector<int>& arr) {
    int countOdd = 0;
    int countEven = 0;
    
    for (int num : arr) {
        if (num % 2 == 0) {
            ++countEven;
        } else {
            ++countOdd;
        }
    }
    
    cout << "Number of odd numbers: " << countOdd << endl;
    cout << "Number of even numbers: " << countEven << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    printSumOfArray(arr);
    printSumOddEven(arr);
    printCountOddEven(arr);

    return 0;
}
