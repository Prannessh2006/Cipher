#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

bool isPalindrome(const string &str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (!isalnum(str[left])) {
            left++;
        } else if (!isalnum(str[right])) {
            right--;
        } else if (tolower(str[left]) != tolower(str[right])) {
            return false;
        } else {
            left++;
            right--;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max value: " << findMax(arr, size) << endl;

    string str = "A man, a plan, a canal, Panama";
    cout << "Is palindrome: " << (isPalindrome(str) ? "true" : "false") << endl;

    return 0;
}
