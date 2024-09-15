#include <iostream>

using namespace std;

void findTargetInArray(const int arr[], int size, int target) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int findTargetIndex(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    findTargetInArray(arr, size, target);

    int index = findTargetIndex(arr, size, target);
    cout << "Index: " << index << endl;

    return 0;
}
