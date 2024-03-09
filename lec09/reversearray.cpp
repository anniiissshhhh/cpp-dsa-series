#include <iostream>
using namespace std;

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void reverse_array(int arr[], int size) {
    int i = 0;
    int j = size - 1;
    while (i <= j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "array before: ";
    print_array(arr, size);
    cout << endl;

    reverse_array(arr, size);

    cout << "array after: ";
    print_array(arr, size);
    cout << endl;
    return 0;
}