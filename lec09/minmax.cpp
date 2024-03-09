#include <limits.h>

#include <iostream>

using namespace std;

int get_max(int num[], int n) {
    int max = INT_MIN;

    // traversing array
    for (int i = 0; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    // returning max value
    return max;
}

int get_min(int num[], int n) {
    int min = INT_MAX;

    // traversing array
    for (int i = 0; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }

    // returning min value
    return min;
}

int main() {
    int size;
    cout << "size: ";
    cin >> size;

    int num[100];

    // taking input in array
    cout << "array: \n";
    for (int i = 0; i < size; i++) {
        cout << "  elem[" << i << "]: ";
        cin >> num[i];
    }

    // printing the array
    cout << "\nnum: [";
    for (int i = 0; i < size; i++) {
        cout << " " << num[i] << " ";
    }
    cout << "]";

    // printing min and max
    cout << "\n\nmin: " << get_min(num, size);
    cout << "\nmax: " << get_max(num, size);

    return 0;
}