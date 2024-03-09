#include <iostream>
using namespace std;

void update_array(int arr[], int size) {
    cout << "inside the function\n";

    // updating array's first element
    arr[0] = 120;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nfunction ended\n";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int array_size = sizeof(arr) / sizeof(arr[0]);

    // updating and printing using function
    update_array(arr, array_size);

    // printing the array
    for (int i = 0; i < array_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // updating and printing using function
    update_array(arr, array_size);

    return 0;
}