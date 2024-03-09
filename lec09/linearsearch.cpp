#include <iostream>
using namespace std;

bool linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (target == arr[i]) return 1;
    }
    return 0;
}

int main() {
    int arr[10] = {5, 7, -2, 10, 22, -2, 05, 22, 1};

    // check if 1 is present in it or not
    int target;
    cout << "target: ";
    cin >> target;

    linear_search(arr, 10, target) ? cout << "present" : cout << "not present";
    return 0;
}